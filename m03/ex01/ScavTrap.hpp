

#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

#include "ClapTrap.hpp"

// Class declaration
class ScavTrap : public ClapTrap {
 public:
  ScavTrap(std::string name);
  ~ScavTrap();

  void guardGate();
};

#endif  // SCAVTRAP_HPP_
