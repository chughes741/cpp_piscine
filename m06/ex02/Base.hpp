
#ifndef BASE_HPP_
#define BASE_HPP_

#include <iostream>
#include <cstdlib>

// Class declaration
class Base {
 public:
  virtual ~Base();
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif  // BASE_HPP_
