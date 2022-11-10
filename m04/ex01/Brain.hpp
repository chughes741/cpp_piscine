
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

	const std::string &getIdeas() const;

 private:
	std::string* ideas_;
};

#endif // BRAIN_HPP_
