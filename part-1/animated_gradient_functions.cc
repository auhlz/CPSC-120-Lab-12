// Alex Labitigan
// CPSC 120-12
// 2022-11-29
// alexlabitigan@csu.fullerton.edu
// @auhlz
//
// Lab 12-01
// Partners: @dianasuceli
//
// Animated Gradient Functions
//

#include "animated_gradient_functions.h"

#include <cmath>
#include <iostream>

bool HasMatchingFileExtension(const std::string &file_name,
                              const std::string &extension) {
  bool result{false};
  if (file_name.size() >= extension.size() &&
      file_name.compare(file_name.size() - extension.size(), extension.size(),
                        extension) == 0) {
    result = true;
  }
  return result;
}

std::vector<double> BuildSineLookupTable(int image_width) {
  std::vector<double> lookup_table;
  double radian_step = M_PI / double(image_width);
  for (int column = 0; column < image_width; column++) {
    double i = sin(column * radian_step);
    lookup_table.push_back(i);
  }
  return lookup_table;
}
