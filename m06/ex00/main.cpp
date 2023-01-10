
#include "convert.hpp"

int main(int argc, char **argv) {
  if (inputError(argc) || argv[1][0] == '\0') {
    return (1);
  }

  if (isPseudoLiteral(argv[1])) {
    return 0;
  }

  converted_data *data = CheckType(argv[1]);

  switch (data->type) {
    case converted_data::type_char:
      data->number = static_cast<double>(argv[1][0]);
      break;
    case converted_data::type_int:
      data->number = static_cast<double>(strtol(argv[1], NULL, 10));
      break;
    case converted_data::type_float:
    case converted_data::type_double:
      data->number = strtod(argv[1], NULL);
      break;
  }
  typeError(data);
  if (data->err) {
    std::cerr << "Type conversion impossible" << std::endl;
  } else {
    printTypes(data->number);
  }
  delete data;
  return 0;
}

// Handles special cases of nan, nanf, +inf, etc..
bool isPseudoLiteral(std::string input) {
  if (input.compare("-inff") == 0 || input.compare("+inff") == 0 ||
      input.compare("nanf") == 0) {
    input.pop_back();
  }
  if (input.compare("-inf") == 0 || input.compare("+inf") == 0 || input.compare("nan") == 0) {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << input << "f" << std::endl;
    std::cout << "double: " << input << std::endl;
    return true;
  }
  return false;
}

// Returns true if there's an input error
bool inputError(int count) {
  switch (count) {
    case 2:
      return false;
    default:
      std::cerr << "Wrong number of arguments" << std::endl;
      return true;
  }
}

// Returns input converted to data struct
converted_data *CheckType(std::string input) {
  converted_data *data = new converted_data;

  data->input = input;

  if (data->input.length() == 1 && !isdigit(data->input[0])) {
    data->type = converted_data::type_char;
  } else if (data->input.find('f') != std::string::npos) {
    data->type = converted_data::type_float;
  } else if (data->input.find('.') != std::string::npos) {
    data->type = converted_data::type_double;
  } else {
    data->type = converted_data::type_int;
  }
  return data;
}

// Checks for type errors
void typeError(converted_data *data) {
  switch (data->type) {
    case converted_data::type_char:
      if (std::isnan(data->number) || std::isinf(data->number) ||
          data->number > std::numeric_limits<char>::max() ||
          data->number < std::numeric_limits<char>::min()) {
        data->err = true;
      }
      break;
    case converted_data::type_int:
      if (std::isnan(data->number) || std::isinf(data->number) ||
          data->number > std::numeric_limits<int>::max() ||
          data->number < std::numeric_limits<int>::min()) {
        data->err = true;
      }
      for (std::string::iterator it = data->input.begin();
           it != data->input.end(); ++it) {
        if (!isdigit(*it)) {
          data->err = true;
        }
      }
      break;
    case converted_data::type_float:
      for (std::string::iterator it = data->input.begin();
           it != data->input.end() - 1; ++it) {
        if (!isdigit(*it) && *it != '.') {
          data->err = true;
        }
      }
      if (data->input.find_first_of('.') != data->input.find_last_of('.') ||
          data->input.find('.') == std::string::npos ||
          data->input.back() != 'f' || !isdigit(*(data->input.begin())) ||
          !isdigit(*(data->input.end() - 2))) {
        data->err = true;
      }
      break;
    case converted_data::type_double:
      for (std::string::iterator it = data->input.begin();
           it != data->input.end(); ++it) {
        if (!isdigit(*it) && *it != '.') {
          data->err = true;
        }
      }
      if (data->input.find('.') == std::string::npos ||
          data->input.find_first_of('.') != data->input.find_last_of('.') ||
          !isdigit(*(data->input.begin())) ||
          !isdigit(*(data->input.end() - 1))) {
        data->err = true;
      }
      break;
  }
}

// Prints data struct from a double
void printTypes(double number) {
  char c = static_cast<char>(number);
  std::cout << "char: ";
  if (nonRepresentable(number) || outsideLimits(number, c)) {
    std::cout << "impossible" << std::endl;
  } else if (!isprint(c)) {
    std::cout << "non displayable" << std::endl;
  } else {
    std::cout << c << std::endl;
  }

  int i = static_cast<int>(number);
  std::cout << "int: ";
  if (nonRepresentable(number) || outsideLimits(number, i)) {
    std::cout << "impossible" << std::endl;
  } else {
    std::cout << i << std::endl;
  }

  std::cout << std::fixed << std::setprecision(1);

  float f = static_cast<float>(number);
  std::cout << "float: ";
  if (outsideLimits(number, f)) {
    std::cout << "impossible" << std::endl;
  } else {
    std::cout << f;
    if (!nonRepresentable(number)) {
      std::cout << "f";
    }
    std::cout << std::endl;
  }

  std::cout << "double: " << number << std::endl;

  return;
}

// Checks if number is NaN or Inf
bool nonRepresentable(double number) {
  if (std::isnan(number) || std::isinf(number)) {
    return true;
  } else {
    return false;
  }
}
