

#include "Zombie.hpp"

#include <iostream>

// Default constructor
Zombie::Zombie() { return; }

// Constructor with name
Zombie::Zombie(std::string new_name) : name_(new_name) { return; }

// Copy constructor
Zombie::Zombie(const Zombie &other) {
  *this = other;
  return;
}

// Default destructor
Zombie::~Zombie() {
  std::cout << name_ << " has been deleted" << std::endl;
  return;
}

// Copy operator overload
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

// name_ display to std::cout
void Zombie::announce() {
  std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
  return;
}
