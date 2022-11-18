
#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  std::cout << "Testing testing" << std::endl;
  {
    // Animal me = Animal();
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
