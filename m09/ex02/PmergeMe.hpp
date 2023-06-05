#pragma once

#include <time.h>

#include <cstdlib>
#include <exception>
#include <iomanip>
#include <memory>
#include <typeinfo>
#include <utility>

template <class T>
class PmergeMe {
 public:
  PmergeMe(char **argv) {
    for (int i = 0; argv[i] != NULL; ++i) {
      int value = std::atoi(argv[i]);
      container_.push_back(std::make_pair(value, value));
    }

    mergeInsertSort();
  }

  // Helper function to print the container
  void printContainer() {
    typename T::iterator it;
    for (it = container_.begin(); it != container_.end(); ++it) {
      std::cout << it->first << " ";
    }
    std::cout << "\n";
  }

 private:
  // Merge-insert sort with timing
  void mergeInsertSort() {
    // Start time
    clock_t start = clock();

    // Sort
    mergeInsertSortHelper(0, container_.size() - 1);

    // End time
    clock_t end     = clock();
    double  elapsed = (end - start) / (double)CLOCKS_PER_SEC;

    std::cout << "Sort time using " << container_type() << ": " << std::fixed << elapsed << "s"
              << std::endl;
  }

  // Helper function for merge-insert sort
  void mergeInsertSortHelper(int left, int right) {
    if (left < right) {
      int mid = left + (right - left) / 2;

      mergeInsertSortHelper(left, mid);
      mergeInsertSortHelper(mid + 1, right);
      merge(left, mid, right);
    }
  }

  // Helper function to merge two sorted subarrays
  void merge(int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<std::pair<int, int> > leftArr(n1);
    std::vector<std::pair<int, int> > rightArr(n2);

    for (int i = 0; i < n1; ++i) {
      leftArr[i] = container_[left + i];
    }

    for (int j = 0; j < n2; ++j) {
      rightArr[j] = container_[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
      if (leftArr[i].first <= rightArr[j].first) {
        container_[k] = leftArr[i];
        ++i;
      } else {
        container_[k] = rightArr[j];
        ++j;
      }
      ++k;
    }

    while (i < n1) {
      container_[k] = leftArr[i];
      ++i;
      ++k;
    }

    while (j < n2) {
      container_[k] = rightArr[j];
      ++j;
      ++k;
    }
  }

  // Helper function to determine container type in string form
  std::string container_type() {
    std::string type = typeid(T).name();
    if (type.find("vector") != std::string::npos) {
      return "vector";
    } else if (type.find("deque") != std::string::npos) {
      return "deque";
    } else {
      return "unknown";
    }
  }

  T container_; /** Underlying container */
};
