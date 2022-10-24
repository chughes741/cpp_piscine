

#include <iostream>
#include <string>

int main() {
  std::string hello = "HI THIS IS BRAIN";
  std::string* ptr = &hello;
  std::string& ref = hello;

  std::cout << &hello << std::endl
            << ptr << std::endl
            << &ref << std::endl
            << hello << std::endl
            << *ptr << std::endl
            << ref << std::endl;

  return 0;
}
