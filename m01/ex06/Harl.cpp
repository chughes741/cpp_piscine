
#include "Harl.hpp"

// Static method for setting filter levle
void Harl::setFilterLevel(std::string filter_level) {
  std::string levels[4] = {"debug", "info", "warning", "error"};
  int i = 0;
  while (i < 4 && levels[i].compare(filter_level) != 0) ++i;
  switch (i) {
    case 0:
      filter_level_ = kDebug;
      break;
    case 1:
      filter_level_ = kInfo;
      break;
    case 2:
      filter_level_ = kWarning;
      break;
    case 3:
      filter_level_ = kError;
      break;
  }
}

// Default constructor
Harl::Harl(void) { return; }

// Default destructor
Harl::~Harl() { return; }

// Complain method
void Harl::complain(std::string level) {
  std::string levels[4] = {"debug", "info", "warning", "error"};
  void (Harl::*f_level[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning,
                                    &Harl::error};
  for (int i = filter_level_; i < 4; ++i) {
    if (level.compare(levels[i]) == 0) (this->*f_level[i])();
  }
  return;
}

// Debug private method
void Harl::debug(void) {
  std::cout
      << "I love having extra bacon for my "
         "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
      << std::endl;
  return;
}

// Info private method
void Harl::info(void) {
  std::cout << "I cannot believe adding extra bacon costs more money. "
               "You didn\'t put enough bacon in my burger! If you did, I "
               "wouldn\'t be "
               "asking for more!"
            << std::endl;
  return;
}

// Warning private method
void Harl::warning(void) {
  std::cout
      << "I think I deserve to have some extra bacon for free. "
         "I\'ve been coming for years whereas you started working here since "
         "last month."
      << std::endl;
  return;
}

// Error private method
void Harl::error(void) {
  std::cout << "This is unacceptable! I want to speak to the manager now."
            << std::endl;
  return;
}
