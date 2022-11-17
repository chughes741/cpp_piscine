
#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>
#include <string>

// Class declaration
class Animal {
 public:
  virtual std::string getType() const = 0;
	virtual void makeSound() const = 0;

 protected:
  std::string type_;
};

#endif  // ANIMAL_HPP_
