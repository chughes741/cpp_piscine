
#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_

#include "ClapTrap.hpp"

// Class declaration
class FragTrap : virtual public ClapTrap {
 public:
  FragTrap(std::string name);
  FragTrap(const FragTrap &other);
  FragTrap &operator=(const FragTrap &rhs);
  ~FragTrap();

  void highFiveGuys();
};

#endif  // FragTRAP_HPP_
