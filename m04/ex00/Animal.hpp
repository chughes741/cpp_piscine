
#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>
#include <string>

// Class declaration
class Animal {
 public:
  Animal(std::string type);
  Animal(const Animal &other);
  Animal &operator=(const Animal &rhs);
  ~Animal();

  std::string getType() const;

 private:
  std::string type_;
};

#endif  // ANIMAL_HPP_
