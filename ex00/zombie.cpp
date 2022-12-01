#include "zombie.h"

Zombie::Zombie(const std::string &name) :
	_name(name)
{

}

Zombie::~Zombie()
{
	std::cout << _name << ": destroyed" << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << "o: BraiiiiiiinnnzzzZ..." << std::endl;
}
