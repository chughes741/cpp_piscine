
#ifndef ZOMBIE_HPP_
#define ZOMBIE_HPP_

#include <iostream>
#include <string>

class Zombie {
 public:
  Zombie(std::string new_name);
  Zombie(const Zombie &zombie);
  ~Zombie();
  Zombie &operator=(const Zombie &zombie);

  void announce(void);

 private:
  std::string name_;
};

// Zombie generation functions
Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif  // ZOMBIE_HPP_
