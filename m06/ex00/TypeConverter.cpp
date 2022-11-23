
#include "TypeConverter.hpp"

// Default constructor
TypeConverter::TypeConverter() { return; }

// Constructor overload
TypeConverter::TypeConverter(std::string value) {
	value_ = std::stod(value);
	return;
}

// Copy constructor
TypeConverter::TypeConverter(const TypeConverter &other) { *this = other; }

// Copy assignment overload
TypeConverter &TypeConverter::operator=(const TypeConverter &rhs) {
	if (this == &rhs) return *this;
  return *this;
}

// Default destructor
TypeConverter::~TypeConverter() { return; }

// TypeConverter::printChar member function
void TypeConverter::printChar() const {
	if ((9.0 >= value_ && value_ <= 13.0) || (32.0 >= value_ && value_ <= 126.0)) {
		std::cout << static_cast<char>(value_) << std::endl;
	} else if (-128.0 >= value_ && value_ <= 127.0) {
		std::cout << "Non printable" << std::endl;
	} else {
		std::cout << "Impossible" << std::endl;
	}
	return;
}

// TypeConverter::printChar member function
void TypeConverter::printInt() const {
	std::cout << static_cast<int>(value_) << std::endl;
	return;
}

// TypeConverter::printChar member function
void TypeConverter::printFloat() const {
	std::cout.precision(1);
	std::cout << value_ << std::endl;
	return;
}

// TypeConverter::printChar member function
void TypeConverter::printDouble() const {
	std::cout.precision(1);
	std::cout << value_ << std::endl;
	return;
}
