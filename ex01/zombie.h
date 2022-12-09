#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
public:
	Zombie();
	Zombie(const std::string& name);
	~Zombie();

	void announce(void) const;

	void setName(const std::string &name);

private:
	std::string _name;
};

#endif // ZOMBIE_H
