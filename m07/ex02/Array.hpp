
#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include <cstddef>
#include <stdexcept>

// Array class template declaration
template <class T>
class Array {
 public:
  Array() : size_(0), array_(new T[0]){};
  Array(unsigned size) : size_(size), array_(new T[size]){};
  Array(const Array &other) : size_(other.size()), array_(new T[other.size()]) {
    for (std::size_t i = 0; i < size_; ++i) {
      array_[i] = other.array_[i];
    }
  };
  Array &operator=(const Array &rhs) {
    if (this != &rhs) {
      delete[] array_;
      size_  = rhs.size();
      array_ = new T[size_];
      for (std::size_t i = 0; i < size_; ++i) {
        array_[i] = rhs.array_[i];
      }
    }
    return *this;
  };
  T &operator[](std::size_t i) {
    return i >= size_ ? throw std::range_error("Bad index") : array_[i];
  };
  ~Array() { delete[] array_; };

  std::size_t size() const { return size_; };

 private:
  std::size_t size_;
  T          *array_;
};

#endif  // ARRAY_HPP_
