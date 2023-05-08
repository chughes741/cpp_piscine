#pragma once

#include <exception>
#include <memory>

using std::allocator;
using std::invalid_argument;

/**
 * @brief Template for PmergeMe class
 *
 * @tparam T Underlying container type
 */
template <template <class, class> class T>
class PmergeMe {
 public:
  /**
   * @brief Construct a new Pmerge Me object
   *
   * @param args Arguments to be sorted in the underlying container
   */
  PmergeMe(char **args) {
    if (args == nullptr) {
      throw invalid_argument("Invalid argument");
    }
    int i = 0;
    while (args[i] != nullptr) {
      container_.push_back(std::stoi(args[i]));
      i++;
    }
  }

  /**
   * @brief Copy constructor
   *
   * @param other Other object
   */
  PmergeMe(const PmergeMe &other) { container_ = other.container_; }

  /**
   * @brief Copy assignment operator
   *
   * @param rhs Right hand side
   * @return PmergeMe&
   */
  PmergeMe &operator=(const PmergeMe &rhs) {
    if (this != &rhs) {
      container_ = rhs.container_;
    }
    return *this;
  }

  /**
   * @brief Destroy the Pmerge Me object
   */
  ~PmergeMe() { return; }

 private:
  T<int, allocator<int>> container_; /** Underlying container */
};
