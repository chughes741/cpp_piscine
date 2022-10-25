

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(std::string new_name) : name_(new_name) { return; }

Zombie::~Zombie() { return; }

void Zombie::announce(void) {
  std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
  return;
}
