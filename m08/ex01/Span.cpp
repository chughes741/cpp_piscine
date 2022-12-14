
#include "Span.hpp"

// Default constructor
Span::Span() : size_(0) { return; }

// Default constructor overload
Span::Span(unsigned size) : size_(size) { return; }

// Copy constructor
Span::Span(const Span &other) : size_(other.getSize()) {
  this->vec_ = vector<int>(other.getVec());
  return;
}

// Copy assignment overload
Span &Span::operator=(const Span &rhs) {
  if (this != &rhs) {
    if (this->size_ < rhs.getSize()) {
      this->vec_ = vector<int>(rhs.getVec());
    } else {
      throw SizeLimitReached();
    }
  }
  return *this;
}

// Default destructor
Span::~Span() { return; }

// Trys to add value to vec_
void Span::addNumber(int value) {
  if (vec_.size() < size_) {
    vec_.push_back(value);
  } else {
    throw SizeLimitReached();
  }
}

// Overload to add a range of ints from a vector to vec_
void Span::addNumber(const std::vector<int>::iterator &begin,
                     const std::vector<int>::iterator &end) {
  int distance = std::distance(begin, end);
  if (distance > static_cast<int>(size_ - vec_.size())) {
    throw SizeLimitReached();
  } else {
    vec_.insert(vec_.end(), begin, end);
  }
}

// Returns the shortest span between two ints in vec_
int Span::shortestSpan() const {
  if (size_ < 2) {
    throw SizeTooSmall();
  }

  vector<int> sorted = vec_;
  std::sort(sorted.begin(), sorted.end());

  int shortest_span = sorted[1] - sorted[0];
  for (vector<int>::iterator it = sorted.begin(); it != sorted.end() - 1;
       ++it) {
    int span = *(it + 1) - *it;
    if (span < shortest_span) {
      shortest_span = span;
    }
  }
  return shortest_span;
}

// Returns the longest span between two ints in vec_
int Span::longestSpan() const {
  if (size_ < 2) {
    throw SizeTooSmall();
  }

  vector<int> sorted = vec_;
  std::sort(sorted.begin(), sorted.end());

  int longest_span = *(sorted.end() - 1) - *(sorted.begin());
  return longest_span;
}

// Returns size_
unsigned Span::getSize() const { return size_; }

// Returns a const ref to vec_
const vector<int> &Span::getVec() const { return vec_; }
