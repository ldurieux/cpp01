#include "humana.h"

HumanA::HumanA(const std::string &name, Weapon &weapon) :
	_name(name),
	_weapon(weapon)
{
	std::cout << _name << ": created" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << _name << ": destroyed" << std::endl;
}

void HumanA::attack() const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
