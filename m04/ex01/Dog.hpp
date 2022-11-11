
#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

// Class declaration
class Dog : public Animal {
 public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &rhs);
	~Dog();

  void makeSound() const;
 private:
	Brain* brain_;
};

#endif // DOG_HPP_
