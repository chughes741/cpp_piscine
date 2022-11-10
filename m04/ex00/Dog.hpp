
#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"

// Class declaration
class Dog : public Animal {
 public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &rhs);
	~Dog();

  void makeSound() const;
};

#endif // DOG_HPP_
