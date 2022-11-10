
#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>
#include <string>

// Class declaration
class Animal {
 public:
  Animal();
  Animal(std::string type);
  Animal(const Animal &other);
  Animal &operator=(const Animal &rhs);
  virtual ~Animal();

  std::string getType() const;
	virtual void makeSound() const;

 protected:
  std::string type_;
};

#endif  // ANIMAL_HPP_
