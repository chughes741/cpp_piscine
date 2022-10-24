
#ifndef WEAPON_HPP_
#define WEAPON_HPP_

#include <string>

// Weapon class
class Weapon {
 public:
  Weapon(std::string weaponname);
  Weapon(const Weapon &weapon);
  ~Weapon();
  Weapon &operator=(const Weapon &weapon);

  const std::string &getType(void);
  void setType(std::string newtype);

 private:
  std::string type_;
};

#endif  // WEAPON_HPP_
