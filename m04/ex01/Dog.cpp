
#include "Dog.hpp"

// Default constructor
Dog::Dog() : Animal("Dog"), brain_(new Brain) {
	std::cout << "A dog has been constructed" << std::endl;
	return;
}

// Copy constructor
Dog::Dog(const Dog &other) : Animal("Dog"), brain_(new Brain) {
	*this = other;
	std::cout << "A dog has been copy constructed" << std::endl;
	return;
}

// Copy assignment overload
Dog &Dog::operator=(const Dog &rhs) {
	this->brain_ = rhs.brain_;
	return *this;
}

// Default destructor
Dog::~Dog() {
	delete brain_;
	std::cout << "A dog has been destroyed" << std::endl;
	return;
}

// makeSound method overload
void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}
