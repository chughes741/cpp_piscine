
#ifndef ZOMBIE_HPP_
#define ZOMBIE_HPP_

#include <iostream>
#include <string>

// Zombie class definition
class Zombie {
 public:
  Zombie();
  Zombie(std::string new_name);
  Zombie(const Zombie &other);
  ~Zombie();
  Zombie &operator=(const Zombie &rhs);

  void setName(std::string name);
  std::string getName() const;
  void announce();

 private:
  std::string name_;
};

Zombie *zombieHorde(int N, std::string name);

#endif  // ZOMBIE_HPP_
