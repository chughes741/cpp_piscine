
#include <iostream>
#include <vector>

#include "easyfind.hpp"

using std::vector;

int main() {
  vector<int> container;
  for (int i = 0; i < 100; ++i) {
    container.push_back(i);
  }
  try {
    vector<int>::iterator it = easyfind(container, 42);
    std::cout << *it << std::endl;
  } catch (std::exception& e) {
    std::cerr << "Value not found" << std::endl;
  }
  return 0;
}
