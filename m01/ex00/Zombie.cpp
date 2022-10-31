

#include "Zombie.hpp"

#include <iostream>

// Default constructor
Zombie::Zombie(std::string new_name) : name_(new_name) { return; }

// Default destructor
Zombie::~Zombie() {
  std::cout << name_ << " has been destroyed" << std::endl;
  return;
}

// Copy assignment
Zombie::Zombie(const Zombie &other) {
  *this = other;
  return;
}

// Method to announce zombies presence
void Zombie::announce(void) {
  std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
  return;
}

// Assignment operator overload
Zombie &Zombie::operator=(const Zombie &rhs) {
  this->name_ = rhs.name_;
  return *this;
}
