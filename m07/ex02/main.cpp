
#include <iostream>

#include "Array.hpp"

int main() {
  Array<int> int_array(10);
  for (std::size_t i = 0; i < int_array.size(); ++i) {
    std::cout << int_array[i] << std::endl;
  }
  try {
    int_array[int_array.size()];
  } catch (std::range_error &e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
