
#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

#include <iostream>
#include <string>

// Class declaration
class ClapTrap {
 public:
  ClapTrap(std::string name);
  ClapTrap(std::string name, unsigned int hit_points, unsigned int energy_points, unsigned int attack_damage);
  ClapTrap(const ClapTrap &other);
  ClapTrap &operator=(const ClapTrap &rhs);
  ~ClapTrap();

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

 private:
  std::string name_;
  unsigned int hit_points_;
  unsigned int energy_points_;
  unsigned int attack_damage_;
};

#endif  // CLAPTRAP_HPP_
