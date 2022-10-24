

#include <iostream>

#include "Zombie.hpp"

// Creates a dynamically allocated Zombie
Zombie* newZombie(std::string name) {
  Zombie* babyzombie = new Zombie(name);
  return babyzombie;
}
