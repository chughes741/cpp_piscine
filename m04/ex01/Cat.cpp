
#include "Cat.hpp"

// Default constructor
Cat::Cat() : Animal("Cat") {
  std::cout << "A cat has been constructed" << std::endl;
  return;
}

// Copy constructor
Cat::Cat(const Cat &other) : Animal("Cat") {
  std::cout << "A cat has been copy constructed" << std::endl;
  *this = other;
  return;
}

// Copy assignment overload
Cat &Cat::operator=(const Cat &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
Cat::~Cat() {
  std::cout << "A cat has been destroyed" << std::endl;
  return;
}

// makeSound overload
void Cat::makeSound() const {
  std::cout << "Meow" << std::endl;
}
