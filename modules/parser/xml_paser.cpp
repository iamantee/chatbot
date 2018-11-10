#include "boost/property_tree/ptree.hpp"
#include "boost/property_tree/xml_parser.hpp"

namespace property_tree = boost::property_tree;

namespace parser{ namespace html_parser {

class XMLParser {
    private:
        property_tree::ptree _root;
        std::string _file_path;

    public:
        
        /** Constructor
        */
        XMLParser() = default;

        /** Constructor
            @param file_path

            @note This constructor 
        */
        XMLParser(std::string file_path): _file_path(file_path)
        {
            property_tree::read_xml(file_path, _root);
        }

        /**
         * Get value by complex path 
         */
        template<typename T>
        T get(std::string complex_path)
        {
            T value;

            try 
            {
                value = _root.get<T>(complex_path);
            } 
            catch(std::exception const& e)
            {
                std::cerr << "Error: " << e.what() << std::endl;
                return EXIT_FAILURE;
            }

            return value;
        }
};
} // namespace jsone_parser 
} // namespace parser 