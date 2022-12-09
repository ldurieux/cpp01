#include "harl.h"

Harl::Harl() :
	_restrict(Debug)
{
	std::cout << "Harl created" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl destroyed" << std::endl;
}

typedef void (Harl::*LogFunc)(void);

void Harl::complain(const std::string &level)
{
	std::string levels[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};
	LogFunc funcs[4] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			(this->*(funcs[i]))();
}

bool Harl::restrict(const std::string &level)
{
	int index = -1;

	std::string levels[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};
	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			index = i;
	switch (index)
	{
	case 0: _restrict = Debug; break;
	case 1: _restrict = Info; break;
	case 2: _restrict = Warning; break;
	case 3: _restrict = Error; break;
	default:
		return (false);
	}
	return (true);
}

void Harl::debug()
{
	if (_restrict == Debug)
		std::cout << "love having extra bacon for my "
					 "7XL-double-cheese-triple-pickle-special-ketchup burger. "
					 "I really do!" << std::endl;
}

void Harl::info()
{
	if (_restrict == Info)
		std::cout << "I cannot believe adding extra bacon costs more money. "
					 "You didn’t put enough bacon in my burger! If you did, "
					 "I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	if (_restrict == Warning)
		std::cout << "think I deserve to have some extra bacon for free. "
					 "I’ve been coming for years whereas you started "
					 "working here since last month." << std::endl;
}

void Harl::error()
{
	if (_restrict == Error)
		std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
