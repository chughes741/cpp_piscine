
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
  bool err;
} converted_data;

bool isPseudoLiteral(std::string input);
bool inputError(int count);
converted_data *CheckType(std::string input);
void typeError(converted_data *data);
void printTypes(double number);
bool nonRepresentable(double number);

template <typename T>
bool outsideLimits(double number, T type) {
  (void)type;
  if (number > std::numeric_limits<T>::max() ||
      number < std::numeric_limits<T>::min()) {
    return true;
  } else {
    return false;
  }
}


#endif  // CONVERT_H
