#include "zombie.h"

Zombie* newZombie(std::string name)
{
	Zombie *res = new Zombie(name);
	return (res);
}
