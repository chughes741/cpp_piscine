

#include <iostream>
#include <string>

#include "Zombie.hpp"

int main() {
  randomChump("Chris");

  Zombie* jenny = newZombie("Jenny");
  jenny->announce();

  delete jenny;
  return 0;
}
