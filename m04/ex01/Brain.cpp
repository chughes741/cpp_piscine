
#include "Brain.hpp"

// Default constructor
Brain::Brain() {
	std::cout << "A brain has been constructed" << std::endl;
	ideas_ = new std::string[100];
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
	this->ideas_ = rhs.ideas_;
	return *this;
}

// Default destructor
Brain::~Brain() { 
	std::cout << "A brain has been destroyed" << std::endl;
	delete[] ideas_;
	return;
}
