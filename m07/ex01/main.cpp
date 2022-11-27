
#include <iostream>

#include "iter.hpp"

int main() {
  int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  iter(array, 10, increment);

  for (std::size_t i = 0; i < 10; ++i) {
    std::cout << array[i] << std::endl;
  }

  return 0;
}
