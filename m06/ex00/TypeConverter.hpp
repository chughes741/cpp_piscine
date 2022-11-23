
#ifndef TYPECONVERTER_HPP_
#define TYPECONVERTER_HPP_

#include <cctype>
#include <iostream>
#include <string>

// Class declaration
class TypeConverter {
 private:
  TypeConverter();
  TypeConverter(const TypeConverter &other);
  TypeConverter &operator=(const TypeConverter &rhs);

 public:
  TypeConverter(std::string value);
  ~TypeConverter();

  void printChar() const;
  void printInt() const;
  void printFloat() const;
  void printDouble() const;

 private:
  double value_;
};

#endif  // TYPECONVERTER_HPP_
