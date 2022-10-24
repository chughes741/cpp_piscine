
#ifndef ZOMBIE_HPP_
#define ZOMBIE_HPP_

#include <iostream>
#include <string>

// Zombie class
class Zombie {
 public:
  Zombie(std::string new_name);
  Zombie(const Zombie &zombie);
  ~Zombie();
  Zombie &operator=(const Zombie &zombie);

  void setName(std::string name);
  std::string getName(void);
  void announce(void);

 private:
  std::string name_;
};

Zombie *zombieHorde(int N, std::string name);

#endif  // ZOMBIE_HPP_
