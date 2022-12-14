
#ifndef HUMANA_HPP_
#define HUMANA_HPP_

#include "Weapon.hpp"

// HumanA class definition
class HumanA {
 public:
  HumanA(std::string newname, Weapon &newweapon);
  HumanA &operator=(const HumanA &rhs);
  ~HumanA();

  const std::string &getName() const;
  const Weapon &getWeapon() const;
  void attack();

 private:
  std::string name_;
  Weapon &myweapon_;
};

#endif  // HUMANA_HPP_
