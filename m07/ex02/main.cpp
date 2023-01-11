
#include <iostream>

#include "Array.hpp"

int main() {
  Array<int> int_array(10);
  Array<int> copy(int_array);
  for (std::size_t i = 0; i < int_array.size(); ++i) {
    std::cout << int_array[i] << std::endl;
    int_array[i] = i;
  }
  try {
    int_array[int_array.size()];
  } catch (std::range_error &e) {
    std::cout << e.what() << std::endl;
  }
  copy = int_array;
    for (std::size_t i = 0; i < int_array.size(); ++i) {
    std::cout << copy[i] << std::endl;
  }

  return 0;
}
