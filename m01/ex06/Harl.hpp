
#ifndef HARL_HPP_
#define HARL_HPP_

#include <iostream>
#include <string>

// Enum for filter level
enum FilterLevel { kDebug = 0, kInfo = 1, kWarning = 2, kError = 3 };

// Harl class
class Harl {
 public:
  static void setFilterLevel(std::string filter_level);

  Harl(void);
  Harl(const Harl &harl);
  ~Harl();
  Harl &operator=(const Harl &harl);

  void complain(std::string level);

 private:
  static FilterLevel filter_level_;

  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
};

#endif  // HARL_HPP_
