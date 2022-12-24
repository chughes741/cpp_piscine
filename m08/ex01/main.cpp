

#include <Span.hpp>
#include <cstdlib>
#include <iostream>
#include <limits>

int main() {
  Span newspan = Span(100000);

  for (int i = 0; i < 100000; ++i) {
    long val = rand() % std::numeric_limits<int>::max();
    newspan.addNumber(static_cast<int>(val));
  }

  std::cout << "Longest span: " << newspan.longestSpan() << std::endl;
  std::cout << "Shortest span: " << newspan.shortestSpan() << std::endl;

  return 0;
}