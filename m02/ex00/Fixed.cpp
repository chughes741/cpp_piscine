
#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void) : raw_bits_(0) { return; }

// Default destructor
Fixed::~Fixed(void) { return; }

// raw_bits_ getter
int Fixed::getRawBits(void) { return (raw_bits_); }

// raw_bits_ setter
void Fixed::setRawBits(int const raw) { raw_bits_ = raw; }
