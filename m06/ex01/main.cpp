
#include <iostream>

#include "Data.hpp"

int main() {
  Data *mydata = new Data;
  std::cout << mydata << std::endl;
  std::cout << (void *)serialize(mydata) << std::endl;
  std::cout << deserialize(serialize(mydata)) << std::endl;

	return 0;
}
