#include <iostream>
#include <string>
#include "zombie.h"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	Zombie *zombieHeap = newZombie("zombie heap");
	if (!zombieHeap)
		return (1);
	zombieHeap->announce();
	delete zombieHeap;
	randomChump("zombie stack");
	return (0);
}
