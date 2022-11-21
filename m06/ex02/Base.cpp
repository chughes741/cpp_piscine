
#include "Base.hpp"

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// Default destructor
Base::~Base() { return; }

// Returns a random instance of A, B, or C
Base* generate(void) {
  int i = rand() % 3;
  Base* newcase;
  switch (i) {
    case 0:
      newcase = new A();
      break;
    case 1:
      newcase = new B();
      break;
    case 2:
      newcase = new C();
      break;
  }
  return newcase;
}

// Prints type of object at pointer p
void identify(Base* p) {
  std::cout << "Pointer is of type: ";
  if (dynamic_cast<A*>(p)) {
    std::cout << "A" << std::endl;
  } else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	} else {
		std::cout << "Invalid cast" << std::endl;
	}
  return;
}

// Prints type of object at reference p
void identify(Base& p) {
  std::cout << "Pointer is of type: ";
  if (dynamic_cast<A*>(&p)) {
    std::cout << "A" << std::endl;
  } else if (dynamic_cast<B*>(&p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(&p)) {
		std::cout << "C" << std::endl;
	} else {
		std::cout << "Invalid cast" << std::endl;
	}
  return;
}
