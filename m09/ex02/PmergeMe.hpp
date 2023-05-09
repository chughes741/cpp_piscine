#pragma once

#include <exception>
#include <memory>
#include <utility>

using std::allocator;
using std::invalid_argument;
using std::pair;
using std::swap;

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
  PmergeMe(T<int> unsorted) {
    // Check if the number of arguments is even, if not, add a -1 to the end
    if (unsorted.size() % 2 != 0) {
      unsorted.push_back(-1);
    }

    // Push pairs of arguments into the underlying container
    for (T<int>::iterator it = unsorted.begin(); it != unsorted.end(); ++it) {
      container_.push_back(pair<int, int>(*it, *(it + 1)));
    }

    // Sort the merged pairs
    for (T<pair<int, int>>::iterator it = unsorted.begin(); it != unsorted.end(); ++it) {
      if (it->first < it->second) {
        swap(it->first, it->second);
      }
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
  T<pair<int, int>, allocator<pair<int, int>>> container_; /** Underlying container */
};
