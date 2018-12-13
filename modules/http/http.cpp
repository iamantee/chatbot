#include <cstdlib>
#include <iostream>
#include <string>

#include "boost/beast/core.hpp"
#include "boost/asio/ssl.hpp"
#include "boost/beast/http.hpp"
#include "boost/beast/version.hpp"
#include "boost/asio/connect.hpp"
#include "boost/asio/ip/tcp.hpp"

using tcp = boost::asio::ip::tcp;       // from "boost/asio/ip/tcp.hpp
namespace ssl = boost::asio::ssl;       // from "boost/asio/ssl.hpp"
namespace http = boost::beast::http;    // from "boost/beast/http.hpp"
typedef ssl::stream<tcp::socket> ssl_socket;

// Performs an HTTP GET and prints the response
class HTTPUtil 
{
    private: 
        std::string _host;
        std::string _port;
        boost::string_view _target;
        int _version = 11;


    public:
        /** Constructor
        */
        HTTPUtil() = default;
        
        /** Constructor
            @param host, port, target

            @note This constructor 
        */
        HTTPUtil(std::string host, 
                std::string port, 
                boost::string_view target):
                _host(host), _port(port), _target(target){}

        bool verify_certificate(bool preverified, boost::asio::ssl::verify_context& ctx)
        {
            return true;
        }

        /**
         * HTTP Get request
         *
         */
        int get()
        {
            try
            {
                // Create a context that uses the default paths for
                // finding CA certificates.
                ssl::context ctx(ssl::context::sslv23);
                ctx.set_default_verify_paths();

                // Open a socket and connect it to the remote host.
                boost::asio::io_context io_context;
                ssl_socket sock(io_context, ctx);
                tcp::resolver resolver(io_context);

                tcp::resolver::query query(_host, "https");

                boost::asio::connect(sock.lowest_layer(), resolver.resolve(query));
		std::cout << "end to connect..." << std::endl;
                sock.lowest_layer().set_option(tcp::no_delay(true));

                // Perform SSL handshake and verify the remote host's
                // certificate.
                // sock.set_verify_mode(ssl::verify_peer);
                sock.set_verify_mode(ssl::verify_none);
                sock.set_verify_callback(ssl::rfc2818_verification(_host));
		std::cout << "begin to handshake..." << std::endl;
                sock.handshake(ssl_socket::client);
		std::cout << "end to handshake..." << std::endl;
		
                // Set up an HTTP GET request message
		std::cout << "beging to construct http request..." << std::endl;
                http::request<http::string_body> req{http::verb::get, _target, _version};
                req.set(http::field::host, _host);
                req.set(http::field::user_agent, BOOST_BEAST_VERSION_STRING);

                // Send the HTTP request to the remote host
		std::cout << "begin to send http request..." << std::endl;
                http::write(sock, req);
		std::cout << "ended sending http request..." << std::endl;
		
                // This buffer is used for reading and must be persisted
                boost::beast::flat_buffer buffer;

                // Declare a container to hold the response
                http::response<http::dynamic_body> res;

                // Receive the HTTP response
                http::read(sock, buffer, res);

                // Write the message to standard out
                std::cout << res << std::endl;

                // Gracefully close the socket
                boost::system::error_code ec;
                sock.shutdown();
                // sock.shutdown(tcp::socket::shutdown_both, ec);

                // not_connected happens sometimes
                // so don't bother reporting it.
                if(ec && ec != boost::system::errc::not_connected)
                    throw boost::system::system_error{ec};

                // If we get here then the connection is closed gracefully
            }
            catch(std::exception const& e)
            {
                std::cerr << "Error: " << e.what() << std::endl;
                return EXIT_FAILURE;
            }
            return EXIT_SUCCESS;
        } 
};

int main(int argc, char** argv)
{
  std::cout << "main func..." << std::endl;
    // Check command line arguments.
    if(argc != 4 && argc != 5)
    {
        std::cerr <<
            "Usage: http-client-sync <host> <port> <target> [<HTTP version: 1.0 or 1.1(default)>]\n" <<
            "Example:\n" <<
            "    http-client-sync www.example.com 80 /\n" <<
            "    http-client-sync www.example.com 80 / 1.0\n";
        return EXIT_FAILURE;
    }
    auto const host = argv[1];
    auto const port = argv[2];
    auto const target = argv[3];
    int version = argc == 5 && !std::strcmp("1.0", argv[4]) ? 10 : 11;

    HTTPUtil http(host, port, target);
    http.get();

}
