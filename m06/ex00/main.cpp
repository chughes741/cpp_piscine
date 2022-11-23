

#include <iostream>

#include "TypeConverter.hpp"

int main(int argc, char **argv) {
  // RBS argc != 2
  if (argc != 1) {
    std::cerr << "Incorrect number of arguments" << std::endl;
  }
  (void)argv;

  // Scalar inputscalar = Scalar(argv[1]);
  TypeConverter type1("2.0");
  type1.printChar();
  type1.printInt();
  type1.printFloat();
  type1.printDouble();
  TypeConverter type2("42.0");
  type1.printChar();
  type1.printInt();
  type1.printFloat();
  type1.printDouble();
  TypeConverter type3("420.0");
  type1.printChar();
  type1.printInt();
  type1.printFloat();
  type1.printDouble();
  TypeConverter type4("4020.0");
  type1.printChar();
  type1.printInt();
  type1.printFloat();
  type1.printDouble();

  return 0;
}
