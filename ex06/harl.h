#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>

enum LogLevel
{
	Debug = 0,
	Info = 1,
	Warning = 2,
	Error = 3,
};

class Harl
{
public:
	Harl();
	~Harl();

	void complain(std::string level);
	bool restrict(const std::string &level);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	LogLevel _restrict;
};

#endif // HARL_H
