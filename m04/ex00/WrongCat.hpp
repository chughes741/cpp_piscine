
#ifndef WRONGCAT_HPP_
#define WRONGCAT_HPP_

#include "WrongAnimal.hpp"

// Class declaration
class WrongCat : public WrongAnimal {
 public:
	WrongCat();
	WrongCat(const WrongCat &other);
	WrongCat &operator=(const WrongCat &rhs);
	~WrongCat();
};

#endif // WRONGCAT_HPP_
