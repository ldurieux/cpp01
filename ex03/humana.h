#ifndef HUMANA_H
#define HUMANA_H

#include "weapon.h"
#include <string>
#include <iostream>

class HumanA
{
public:
	HumanA(const std::string& name, Weapon& weapon);
	~HumanA();

	void attack() const;

private:
	std::string _name;
	Weapon& _weapon;
};

#endif // HUMANA_H
