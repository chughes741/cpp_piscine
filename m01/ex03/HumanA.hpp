
#ifndef HUMANA_HPP_
#define HUMANA_HPP_

#include <iostream>
#include <string>

#include "Weapon.hpp"

class HumanA {
 public:
  HumanA(std::string newname, Weapon &newweapon);
  HumanA(const HumanA &humana);
  ~HumanA();
  HumanA &operator=(const HumanA &humana);

  void attack(void);

 private:
  std::string name_;
  Weapon &myweapon_;
};

#endif  // HUMANA_HPP_
