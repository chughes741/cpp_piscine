
#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <iostream>
#include <string>

// Class declaration
class Brain {
 public:
	Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &rhs);
	~Brain();

	const std::string &getIdeas(int i) const;
	void setIdea(std::string newidea);

 private:
	std::string ideas_[100];
	int n_ideas_;
};

#endif // BRAIN_HPP_
