
#ifndef WEAPON_HPP_
#define WEAPON_HPP_

#include <string>

// Weapon class definition
class Weapon {
 public:
  Weapon(std::string weaponname);
  Weapon(const Weapon &other);
  ~Weapon();
  Weapon &operator=(const Weapon &rhs);

  const std::string &getType(void) const;
  void setType(std::string newtype);

 private:
  std::string type_;
};

#endif  // WEAPON_HPP_
