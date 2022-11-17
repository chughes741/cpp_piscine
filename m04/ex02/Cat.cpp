
#include "Cat.hpp"

// Default constructor
Cat::Cat() : Animal("Cat"), brain_(new Brain()) {
  std::cout << "A cat has been constructed" << std::endl;
  return;
}

// Copy constructor
Cat::Cat(const Cat &other) : Animal("Cat"), brain_(new Brain(*other.brain_)) {
  std::cout << "A cat has been copy constructed" << std::endl;
  return;
}

// Copy assignment overload
Cat &Cat::operator=(const Cat &rhs) {
  this->brain_ = rhs.brain_;
  return *this;
}

// Default destructor
Cat::~Cat() {
  delete brain_;
  std::cout << "A cat has been destroyed" << std::endl;
  return;
}

// makeSound overload
void Cat::makeSound() const {
  std::cout << "Meow" << std::endl;
}

// Returns an idea from Brain at index i
const std::string &Cat::think(int i) const { return (brain_->getIdeas(i)); }
