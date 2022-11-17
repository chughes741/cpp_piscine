
#include "Brain.hpp"

// Default constructor
Brain::Brain() {
	std::string new_ideas[] = {
		"I should make some tea",
		"One plus one could be eleven",
		"I'm so happy I don't need to worry about norminette",
		"I'm running out of ideas to put in here",
		"What does paint taste like"
	};
	for(int i = 0; i < 100; ++i) {
		ideas_[i] = new_ideas[rand() % (sizeof(new_ideas) / sizeof(new_ideas[0]))];
	}
	std::cout << "A brain has been constructed" << std::endl;
	return;
}

// Copy constructor
Brain::Brain(const Brain &other) {
	for (int i = 0; i < 100; ++i) {
		this->ideas_[i] = other.getIdeas(i);
	}
	std::cout << "A brain has been copy constructed" << std::endl;
	return;
}

// Copy assignment overload
Brain &Brain::operator=(const Brain &rhs) {
	for (int i = 0; i < 100; ++i) {
		this->ideas_[i] = rhs.getIdeas(i);
	}
	return *this;
}

// Default destructor
Brain::~Brain() { 
	std::cout << "A brain has been destroyed" << std::endl;
	return;
}

// idea_ getter
const std::string &Brain::getIdeas(int i) const { return (ideas_[i]); };
