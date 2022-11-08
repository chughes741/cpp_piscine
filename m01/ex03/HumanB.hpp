
#ifndef HUMANB_HPP_
#define HUMANB_HPP_

#include "Weapon.hpp"

// HumanB class definition
class HumanB {
 public:
  HumanB(std::string newname);
  HumanB &operator=(const HumanB &rhs);
  ~HumanB();

  const std::string &getName() const;
  void setName(std::string name);
  Weapon *getWeapon() const;
  void setWeapon(Weapon &weaponname);
  void attack(void);

 private:
  std::string name_;
  Weapon *myweapon_;
};

#endif  // HUMANB_HPP_
