
#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  {
    // Array of mixed animals test
    Animal *animals[4];

    for(int i = 0; i < 4; ++i) {
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
  {
    // Deep copy tests
    Cat firstcat = Cat();

    std::cout << std::endl;

    Cat copycat = Cat(firstcat);
  }
  return 0;
}
