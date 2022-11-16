
#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
  {
    const Animal* meta = new Animal("Unidentified");
    const Animal* beta = new Animal(*meta);
    meta->makeSound();
    std::cout << meta->getType() << " " << std::endl;
    std::cout << beta->getType() << " " << std::endl;
    delete meta;
    delete beta;
    std::cout << std::endl;

    const Animal* i = new Cat();
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    delete i;
    std::cout << std::endl;

    const Animal* j = new Dog();
    std::cout << j->getType() << " " << std::endl;
    j->makeSound();
    delete j;
    std::cout << std::endl;
  }
  std::cout << std::endl;
  {
    const WrongAnimal* meta = new WrongAnimal();
    meta->makeSound();
    delete meta;
    std::cout << std::endl;

    const WrongAnimal* i = new WrongCat();
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    delete i;
    std::cout << std::endl;
  }
  return 0;
}
