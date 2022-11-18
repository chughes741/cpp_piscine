
#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal() {
  std::cout << "A WrongAnimal has been constructed" << std::endl;
  return;
}

// Default constructor overload
WrongAnimal::WrongAnimal(std::string type) : type_(type) {
  std::cout << "A WrongAnimal has been constructed" << std::endl;
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &other) {
  std::cout << "A WrongAnimal has been copy constructed" << std::endl;
  *this = other;
  return;
}

// Copy assignment overload
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
WrongAnimal::~WrongAnimal() {
  std::cout << "A WrongAnimal has been destroyed" << std::endl;
  return;
}

// type_ getter
std::string WrongAnimal::getType() const { return type_; }

// makeSound method
void WrongAnimal::makeSound() const { std::cout << "Moo" << std::endl; }
