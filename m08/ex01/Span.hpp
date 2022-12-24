
#ifndef SPAN_HPP_
#define SPAN_HPP_

#include <algorithm>
#include <stdexcept>
#include <vector>

using std::vector;

// Class declaration
class Span {
 public:
  Span(unsigned size);
  Span(const Span &other);
  Span &operator=(const Span &rhs);
  ~Span();

  void addNumber(int value);
  int shortestSpan() const;
  int longestSpan() const;
  unsigned getSize() const;
  const vector<int> &getVec() const;

  class SizeLimitReached : public std::exception {
   public:
    const char *what() const throw() { return "Container size limit reached"; }
  };

  class SizeTooSmall : public std::exception {
   public:
    const char *what() const throw() { return "Too few elements to find span"; }
  };

 private:
  Span();
  vector<int> vec_;
  const unsigned size_;
};

#endif  // SPAN_HPP_
