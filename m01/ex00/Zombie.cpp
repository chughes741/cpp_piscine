

#include "Zombie.hpp"

#include <iostream>

// Default constructor
Zombie::Zombie(std::string new_name) : name_(new_name) { return; }

// Copy assignment
Zombie::Zombie(const Zombie &other) {
  *this = other;
  return;
}

// Default destructor
Zombie::~Zombie() {
  std::cout << name_ << " has been destroyed" << std::endl;
  return;
}

// Assignment operator overload
Zombie &Zombie::operator=(const Zombie &rhs) {
  this->name_ = rhs.getName();
  return *this;
}

// name_ setter
void Zombie::setName(std::string name) {
  name_ = name;
  return;
}

// name_ getter
std::string Zombie::getName() const { return name_; }

// Method to announce zombies presence
void Zombie::announce() {
  std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
  return;
}
