#include <iostream>
#include <deque>
#include <set>
#include <vector>

#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " x y z..." << std::endl;
    return EXIT_FAILURE;
  }

  // Print unsorted values
  std::cout << "Presorted list: ";
  for (int i = 1; i < argc; ++i) {
    std::cout << argv[i] << " ";
  }
  std::cout << std::endl;

  // Create set to check for duplicates and sort
  std::set<int> set;
  for (int i = 1; i < argc; ++i) {
    // Convert to int and check for valid value
    /** @todo use stoi */
    long long value = std::atoll(argv[i]);
    if (value < 0 || value > __INT_MAX__) {
      std::cerr << "Invalid value: " << argv[i] << std::endl;
      return EXIT_FAILURE;
    }

    // Insert into set and check for duplicate
    if (set.insert(value).second == false) {
      std::cerr << "Duplicate value: " << argv[i] << std::endl;
      return EXIT_FAILURE;
    }
  }

  // Print sorted values
  std::cout << "Sorted list: ";
  for (std::set<int>::iterator it = set.begin(); it != set.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  PmergeMe<std::vector<std::pair<int, int> > > pmerge_vector(&argv[1]);
  PmergeMe<std::deque<std::pair<int, int> > >   pmerge_deque(&argv[1]);

  return EXIT_SUCCESS;
}
