#include "zombie.h"

void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}
