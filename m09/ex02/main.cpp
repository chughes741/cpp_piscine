#include <iostream>

#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
  PmergeMe<std::vector> pmergeMe(argv[1]);
  return 0;
}
