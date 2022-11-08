
#include "Harl.hpp"

int main() {
  Harl my_harl;

  my_harl.complain("debug");
  my_harl.complain("info");
  my_harl.complain("warning");
  my_harl.complain("error");
  my_harl.complain("errors");
  my_harl.complain("erro");
  my_harl.complain("breakdown");

  return 0;
}
