
#include "Animal.hpp"

// Default constructor
Animal::Animal() {
  std::cout << "An animal has been constructed" << std::endl;
  return;
}

// Default constructor overload
Animal::Animal(std::string type) : type_(type) {
  std::cout << "An animal has been constructed" << std::endl;
  return;
}

// Copy constructor
Animal::Animal(const Animal &other) {
  std::cout << "An animal has been copy constructed" << std::endl;
  this->type_ = other.getType();
  return;
}

// Copy assignment overload
Animal &Animal::operator=(const Animal &rhs) {
  this->type_ = rhs.getType();
  return *this;
}

// Default destructor
Animal::~Animal() {
  std::cout << "An animal has been destroyed" << std::endl;
  return;
}

// type_ getter
std::string Animal::getType() const { return type_; }

// Make sound method
void Animal::makeSound() const {
  std::cout << "Animals are a concept, ideas don't make sounds!" << std::endl;
}
