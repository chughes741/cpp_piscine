
#include "WrongCat.hpp"

// Default constructor
WrongCat::WrongCat() : WrongAnimal("WrongCat") { 
	std::cout << "A WrongCat has been constructed" << std::endl;
	return;
}

// Copy constructor
WrongCat::WrongCat(const WrongCat &other) {
	std::cout << "A WrongCat has been copy constructed" << std::endl;
	*this = other;
	return;
}

// Copy assignment overload
WrongCat &WrongCat::operator=(const WrongCat &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
WrongCat::~WrongCat() { 
	std::cout << "A WrongCat has been destroyed" << std::endl;
	return;
}
