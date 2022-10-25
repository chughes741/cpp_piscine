
#ifndef HARL_HPP_
#define HARL_HPP_

#include <iostream>
#include <string>

// Harl class
class Harl {
 public:
  Harl(void);
  Harl(const Harl &harl);
  ~Harl();
  Harl &operator=(const Harl &harl);

  void complain(std::string level);

 private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
};

#endif  // HARL_HPP_
