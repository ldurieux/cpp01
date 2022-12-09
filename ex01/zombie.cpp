#include "zombie.h"

Zombie::Zombie()
{

}

Zombie::Zombie(const std::string &name) :
	_name(name)
{

}

Zombie::~Zombie()
{
	std::cout << _name << ": destroyed" << std::endl;
}

void Zombie::announce() const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string &name)
{
	_name = name;
}
