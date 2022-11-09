
#include "Dog.hpp"

// Default constructor
Dog::Dog() : Animal("dog") {
	std::cout << "A dog has been constructed" << std::endl;
	return;
}

// Copy constructor
Dog::Dog(const Dog &other) : Animal("dog") {
	std::cout << "A dog has been copy constructed" << std::endl;
	*this = other;
	return;
}

// Copy assignment overload
Dog &Dog::operator=(const Dog &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
Dog::~Dog() {
	std::cout << "A dog has been destroyed" << std::endl;
	return;
}
