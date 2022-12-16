
#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <string>

typedef struct covert_data {
  enum input_type { type_char, type_int, type_float, type_double } type;
  std::string input;
} convert_data;

bool input_error(int count);
convert_data *ConvertData(std::string input);

#endif  // CONVERT_H
