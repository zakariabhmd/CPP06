#include "Scalartype.hpp"

int main(int ac, char **av)
{
	if(ac == 2)
		ScalarConverter::convert(av[1]);
	else
		std::cout << " wrong arguments number" << std::endl;
	return 0;
}