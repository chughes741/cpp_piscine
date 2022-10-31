
#include "Harl.hpp"


int main(int argc, char *argv[]) {
  if (argc != 2) return 1;
  Harl::setFilterLevel(argv[1]);

  Harl my_harl;
  my_harl.complain("debug");
  my_harl.complain("info");
  my_harl.complain("warning");
  my_harl.complain("error");

  return 0;
}
