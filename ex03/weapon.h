#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class Weapon
{
public:
	Weapon(const std::string& type);
	~Weapon();

	const std::string& getType() const;
	void setType(const std::string &type);

private:
	std::string _type;
};

#endif // WEAPON_H
