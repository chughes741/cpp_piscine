
#include "Brain.hpp"

// Default constructor
Brain::Brain() : n_ideas_(0) {
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
	this->ideas_ = rhs.ideas_;
	return *this;
}

// Default destructor
Brain::~Brain() { 
	std::cout << "A brain has been destroyed" << std::endl;
	return;
}

// idea_ getter
const std::string &Brain::getIdeas(int i) const {
	if (0 <= i && i < n_ideas_)
		return (ideas_[i]);
	else
		return NULL;
}

void Brain::setIdea(std::string newidea) {
	ideas_[n_ideas_] = newidea;
	if (n_ideas_ < 100)
		n_ideas_++;
	else
		n_ideas_ = 0;
	return;
}
