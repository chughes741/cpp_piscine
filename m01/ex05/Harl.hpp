
#ifndef HARL_HPP_
#define HARL_HPP_

#include <iostream>
#include <string>

// Harl class definition
class Harl {
 public:
  Harl();
  Harl(const Harl &other);
  ~Harl();

  void complain(std::string level);

 private:
  void debug();
  void info();
  void warning();
  void error();
};

#endif  // HARL_HPP_
