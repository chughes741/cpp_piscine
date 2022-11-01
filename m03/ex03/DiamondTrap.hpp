
#ifndef DIAMONDTRAP_HPP_
#define DIAMONDTRAP_HPP_

#include <string>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

// Class declaration
class DiamondTrap : public ScavTrap, public FragTrap {
 public:
  DiamondTrap(std::string name);
  DiamondTrap(const DiamondTrap &other);
  DiamondTrap &operator=(const DiamondTrap &rhs);
  ~DiamondTrap();

	void whoAmI();
 private:
  std::string name_;
};

#endif  // DIAMONDTRAP_HPP_
