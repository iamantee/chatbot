#include <string>
#include <array>

using namespace std;

class ptree
{
private:
  string all_xpath;
  string xpath;
  string raw_content;
  
public:
  /** @note Constructor
   */
  ptree() = default;

  /** @note Deconstructor
   */
  virtual ~ptree();

  /** @note function get_xpath
   */
  string get_xpath(string regex) {
    
  }
};
