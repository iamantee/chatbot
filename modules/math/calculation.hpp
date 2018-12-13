#include <vector>

#ifndef CALCULATION_H
#define CALCULATION_H

namespace calculation {

/** @note struct matrix
 */
struct matrix {
  std::vector<std::vector<double> > data;
  int row_count;
  int column_count;
};

} // namespace calculation
#endif
