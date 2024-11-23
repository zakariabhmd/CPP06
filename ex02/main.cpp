#include "Base.hpp"
#include "A.hpp"
#include "C.hpp"
#include "B.hpp"

int main()
{
	// Base *tst;

	// tst = generate();
	// identify(tst);
	// identify(*tst);
        Base* base = generate();
        std::cout << "Identifying via pointer: ";
        identify(base);
        std::cout << "Identifying via reference: ";
        identify(*base);
}