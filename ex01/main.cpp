#include "Serialization.hpp"

int main()
{
	Data *s = NULL;


	uintptr_t tst1 = Serializer::serialize(s);
	Data *test2 = Serializer::deserialize(tst1);

	// he.deserialize(tst1);
	if (s == test2)
		std::cout << "correct\n";
	else
		std::cout << "incorrect\n";
	delete s;
	delete test2;
	return 0;
}