
#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  std::cout << "Brain tests" << std::endl;
  {
    // Array of mixed animals test
    Animal *animals[4];

    for (int i = 0; i < 4; ++i) {
      if (i % 2) {
        animals[i] = new Dog();
      } else {
        animals[i] = new Cat();
      }
      std::cout << std::endl;
    }
    for (int i = 0; i < 4; ++i) {
      delete animals[i];
      std::cout << std::endl;
    }
  }
  std::cout << std::endl;
  std::cout << "Deep copy tests" << std::endl;
  {
    // Deep copy tests
    Cat firstcat = Cat();
    Cat secondcat = Cat();
    Cat copycat = Cat(firstcat);

    std::cout << std::endl;
    for (int i = 0; i < 5; ++i) {
      std::cout << firstcat.think(i) << std::endl;
      std::cout << copycat.think(i) << std::endl;
      std::cout << secondcat.think(i) << std::endl;
      std::cout << std::endl;
    }
  }
  return 0;
}
