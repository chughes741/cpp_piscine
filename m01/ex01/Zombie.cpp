

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(std::string new_name) : name_(new_name) { return; }

Zombie::~Zombie(void) { return; }

void Zombie::setName(std::string name) {
  name_ = name;
  return;
}

std::string Zombie::getName(void) { return name_; }

void Zombie::announce(void) {
  std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
  return;
}
