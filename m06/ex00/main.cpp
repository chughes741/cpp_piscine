

#include <iostream>
#include <string>

// Returns true if there's an input error
bool input_error(int count, std::string input) {
  if (count < 2) {
    std::cerr << "This program requires command line input";
  } else if (count > 2) {
    std::cerr << "This program only takes one argument";
  } else if (input.size() == 0) {
    std::cerr << "This program can't convert empty strings";
  } else {
    return false;
  }
  return true;
}

int main(int argc, char **argv) {
  if (input_error(argc, argv) {
    exit(1);
  }
  
  return 0 ;
}
