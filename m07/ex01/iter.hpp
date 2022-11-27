
#ifndef ITER_HPP_
#define ITER_HPP_

#include <cstddef>

// iter function template declaration
template <typename T>
void iter(T* array, std::size_t len, void (*f)(T&)) {
  for (size_t i = 0; i < len; ++i) {
    f(array[i]);
  }
}

template <typename T>
void increment(T& value) {
  ++value;
}

#endif  // ITER_HPP_
