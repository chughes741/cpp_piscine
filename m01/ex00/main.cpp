

#include <iostream>
#include <string>

#include "Zombie.hpp"

int main() {
  randomChump("Chris");

  Zombie* sean = newZombie("Jenny");
  sean->announce();

  delete sean;
  return 0;
}
