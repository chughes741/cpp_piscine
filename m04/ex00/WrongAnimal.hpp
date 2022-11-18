
#ifndef WRONGANIMAL_HPP_
#define WRONGANIMAL_HPP_

#include <iostream>
#include <string>

// Class declaration
class WrongAnimal {
 public:
  WrongAnimal();
  WrongAnimal(std::string type);
  WrongAnimal(const WrongAnimal &other);
  WrongAnimal &operator=(const WrongAnimal &rhs);
  ~WrongAnimal();

  std::string getType() const;
  void makeSound() const;

 protected:
  std::string type_;
};

#endif  // WRONGANIMAL_HPP_
