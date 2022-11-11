
#include "Brain.hpp"

// Default constructor
Brain::Brain() {
	std::cout << "A brain has been constructed" << std::endl;
	return;
}

// Copy constructor
Brain::Brain(const Brain &other) {
	std::cout << "A brain has been copy constructed" << std::endl;
	*this = other;
	return;
}

// Copy assignment overload
Brain &Brain::operator=(const Brain &rhs) {
	(void)rhs;
	return *this;
}

// Default destructor
Brain::~Brain() { 
	std::cout << "A brain has been destroyed" << std::endl;
	return;
}
