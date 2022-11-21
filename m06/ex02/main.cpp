
#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

int main() {
	srand(time(NULL));

	Base* ptr1 = generate();
	Base* ptr2 = generate();
	Base* ptr3 = NULL;
	
	Base& ref1 = *ptr1;
	Base& ref2 = *ptr2;
	Base& ref3 = *ptr3;

	identify(ptr1);
	identify(ptr2);
	identify(ptr3);
	identify(ref1);
	identify(ref2);
	identify(ref3);

	return 0;
}