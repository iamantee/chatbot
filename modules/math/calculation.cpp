#include <cmath>
#include <vector>
		 
namespace calculation {

class Vector
{
private:
  std::vector<double> _vector;
public:
  /** @note Constructor
   */
  Vector() = default;
  

/** @note Constructor
   * @param vector 
   */
  Vector(std::vector<double> vector):_vector(vector){}

  /** @note Deconstructor
   */
  virtual ~Vector();

  /** @note function get_inner_product
   */
  double get_inner_product(std::vector<double> vector) {
    double result = std::nan("1");

    if(_vector.size() == vector.size()) {
      result = 0;
      for (int i; i < v1.size(); i++) {
	result += v1[i] * v2[i];
      }
    } else {
      // TODO: throw exception 
    }
    
    return result;
  }

  /** @note function get_outer_product
   */
  Vector get_outer_product(std::vector<double> v1, std::vector<double> v2) {
    return 0;
  }
}; // class Vector
} // namespace calculation
