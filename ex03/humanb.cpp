#include "humanb.h"

HumanB::HumanB(const std::string &name) :
	_name(name),
	_weapon(nullptr)
{

}

void HumanB::attack() const
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
