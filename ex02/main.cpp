#include "Base.hpp"
#include "A.hpp"
#include "C.hpp"
#include "B.hpp"

int main()
{
	Base *tst;

	tst = generate();
	identify(tst);
	identify(*tst);
}