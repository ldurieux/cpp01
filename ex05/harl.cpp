#include "harl.h"

Harl::Harl()
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

void Harl::debug()
{
	std::cout << "love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special-ketchup burger. "
				 "I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
				 "You didn’t put enough bacon in my burger! If you did, "
				 "I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "think I deserve to have some extra bacon for free. "
				 "I’ve been coming for years whereas you started "
				 "working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
