

#include <Span.hpp>
#include <iostream>

int main() {
  Span sp = Span(6);

  sp.addNumber(-100);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(-101);
  sp.addNumber(20);

  std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
  std::cout << "Longest span: " << sp.longestSpan() << std::endl;

  Span sn = Span(10);

  sn.addNumber(0);
  vector<int> temp = vector<int>(sp.getVec());
  sn.addNumber(temp.begin(), temp.end());

  std::cout << "Shortest span: " << sn.shortestSpan() << std::endl;
  std::cout << "Longest span: " << sn.longestSpan() << std::endl;

  return 0;
}
