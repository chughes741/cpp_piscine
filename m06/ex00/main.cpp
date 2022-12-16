
#include "convert.hpp"

int main(int argc, char **argv) {
  if (input_error(argc) || argv[1][0] == '\0') {
    return (1);
  }

  convert_data data;
  data.input = argv[1];
  data.type = convert_data::type_int;

  if (data.input.length() == 1 && isprint(data.input[0])) {
    data.type = convert_data::type_char;
  } else if (data.input.find('f')) {
    data.type = convert_data::type_float;
  } else if (data.input.find('.')) {
    data.type = convert_data::type_double;
  }

  return 0;
}

// Returns true if there's an input error
bool input_error(int count) {
  switch (count) {
    case 2:
      return false;
    default:
      std::cerr << "Wrong number of arguments";
      return true;
  }
}
