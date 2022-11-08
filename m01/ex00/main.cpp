
#include "Zombie.hpp"

int main() {
  randomChump("Chris");

  Zombie* sean = newZombie("Jenny");
  sean->announce();

  Zombie* paul = sean;
  paul->setName("paul");
  paul->announce();
  delete sean;
  return 0;
}
