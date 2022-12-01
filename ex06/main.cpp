#include <iostream>
#include "harl.h"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc <= 1)
		return (1);
	if (!harl.restrict(argv[1]))
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (0);
	}

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");

	return (0);
}
