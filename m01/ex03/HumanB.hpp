
#ifndef HUMANB_HPP_
#define HUMANB_HPP_

#include <string>
#include <iostream>

#include "Weapon.hpp"

class HumanB {
 public:
  HumanB(std::string newname);
  HumanB(const HumanB &humanb);
  ~HumanB();
  HumanB &operator=(const HumanB &humanb);

  void setWeapon(Weapon weaponname);
  void attack(void);

 private:
  std::string name_;
  Weapon *myweapon_;
};

#endif  // HUMANB_HPP_
