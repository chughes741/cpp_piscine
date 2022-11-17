
#ifndef CAT_HPP_
#define CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

// Class declaration
class Cat : public Animal {
 public:
  Cat();
  Cat(const Cat &other);
  Cat &operator=(const Cat &rhs);
  ~Cat();
  
  std::string getType() const;
  void makeSound() const;
  const std::string &think(int i) const;

 private:
  Brain *brain_;
};

#endif  // CAT_HPP_
