
#ifndef CONVERT_H
#define CONVERT_H

#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>

typedef struct converted_data {
  enum input_type { type_char, type_int, type_float, type_double } type;
  std::string input;
  double number;
} converted_data;

bool inputError(int count);
converted_data *CheckType(std::string input);
bool typeError(converted_data *data);
void printTypes(double number);

#endif  // CONVERT_H
