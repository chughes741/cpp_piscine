
#include "convert.hpp"

int main(int argc, char **argv) {
  if (input_error(argc) || argv[1][0] == '\0') {
    return (1);
  }

  convert_data *data = ConvertData(argv[1]);

  switch (data->type) {
    case convert_data::type_char:
      std::cout << "Type: char" << std::endl;
      break;
    case convert_data::type_int:
      std::cout << "Type: int" << std::endl;
      break;
    case convert_data::type_float:
      std::cout << "Type: float" << std::endl;
      break;
    case convert_data::type_double:
      std::cout << "Type: double" << std::endl;
      break;
  }
  return 0;
}

// Returns input converted to data struct
convert_data *ConvertData(std::string input) {
  convert_data *data = new covert_data;

  data->input = input;
  data->type = convert_data::type_int;

  if (data->input.length() == 1 && isprint(data->input[0])) {
    data->type = convert_data::type_char;
  } else if (data->input.find('f')) {
    data->type = convert_data::type_float;
  } else if (data->input.find('.')) {
    data->type = convert_data::type_double;
  }
  return data;
}

// Returns true if there's an input error
bool input_error(int count) {
  switch (count) {
    case 2:
      return false;
    default:
      std::cerr << "Wrong number of arguments" << std::endl;
      return true;
  }
}
