
#include "Harl.hpp"

FilterLevel Harl::filter_level_ = kDebug;

int main(int argc, char *argv[]) {
  if (argc != 2) return 1;
  Harl::setFilterLevel(argv[1]);

  Harl my_harl;
  my_harl.complain("debug");
  my_harl.complain("info");
  my_harl.complain("warning");
  my_harl.complain("error");

  my_harl.~Harl();

  return 0;
}
