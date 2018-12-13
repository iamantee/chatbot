#include <cmath>
#include <vector>
#include "calculation.hpp"	    

namespace calculation {

using namespace calculation;

class Calculation
{
private:

public:
  /** @note Constructor
   */
  Calculation() = default;
  
  /** @note Deconstructor
   */
  virtual ~Calculation();

  /** @note function add
   */
  std::vector<double> add(std::vector<double> v1, std::vector<double> v2) {
    std::vector<double> result;

    if(v1.size() == v2.size()) {
      result.reserve(v1.size());
      for (int i = 0; i < v1.size(); i++) {
	result[i] = v1[i] + v2[i];
      }

    } else {
      // TODO: throw exception       
    }
    return result;
  }
  
  /** @note function get_inner_product
   */
  double get_inner_product(std::vector<double> v1, std::vector<double> v2) {
    double result = std::nan("1");

    if(v1.size() == v2.size()) {
      result = 0;
      for (int i = 0; i < v1.size(); i++) {
	result += v1[i] * v2[i];
      }
    } else {
      // TODO: throw exception 
    }
    
    return result;
  }

  /** @note function get_outer_product
   */
  matrix get_outer_product(std::vector<double> v1, std::vector<double> v2) {
    matrix result = {};
    std::vector<double> tmp_vector;

    if(v1.size() == v2.size()) {
      for(double singular : v1) {
	tmp_vector = v2;
	for (double& e : tmp_vector) {
	  e *= singular;
	}
	result.data.push_back(tmp_vector);
      }
    } else {
      // TODO: throw exception 
    }
    
    return result;
  }


  /** @note function init_matrix
   */
  void init_matrix(matrix& m, int row_count, int column_count) {
    std::vector<double> tmp_vector_data;

    m.row_count = row_count;
    m.column_count = column_count;
    tmp_vector_data.reserve(m.column_count);
    for (int i = 0; i < m.row_count; i++) {
      m.data.push_back(tmp_vector_data);
    }

  }
  
  /** @note function transpose
   */
  matrix transpose(matrix m) {
    matrix result = {};
    std::vector<double> tmp_vector(m.column_count);

    init_matrix(result, m.column_count, m.row_count);
    for (int i = 0; i < m.row_count; i++) {
      for (int j = 0; j < m.column_count; j++) {
	result.data[j][i] = m.data[i][j];
      }
    }
    
    return result;
  }

  /** @note function add
   */
  matrix add(matrix m1, matrix m2) {
    matrix result = {};

    if(m1.row_count == m2.row_count && m1.column_count == m2.column_count) {
      init_matrix(result, m1.row_count, m1.column_count);
      for (int i = 0; i < result.row_count; i++) {
	result.data[i] = add(m1.data[i], m2.data[i]);
      }
    } else {
      // TODO: throw exception
    }

    return result;
  }
  
  /** @note function get_matrix_multiplication_result
   *  @note suppose m2 is already transposed 
   */
  matrix multiply(matrix m1, matrix m2) {
    matrix result= {};

    init_matrix(result, m1.row_count, m2.row_count);
    if(m1.column_count == m2.column_count) {
      for (int i = 0; i < m1.row_count; i++) {
	for (int j = 0; j < m2.row_count; j++) {
	  result.data[i][j] = get_inner_product(m1.data[i], m2.data[j]);
	}
      }

    } else {
      // TODO: throw exception
    }

    return result;
  }
  
}; // class Vector
} // namespace calculation
