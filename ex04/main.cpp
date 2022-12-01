#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::string filename, s1, s2;

	if (argc < 4)
	{
		std::cout << "not enough arguments" << std::endl;
		return (1);
	}

	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	std::ifstream fileIn(filename);
	if (!fileIn.is_open())
	{
		std::cout << "couldn't read " << filename << std::endl;
		return (1);
	}
	std::ofstream fileOut(filename + ".replace", std::ios::out | std::ios::trunc);
	if (!fileOut.is_open())
	{
		std::cout << "couldn't write " << filename + ".replace" << std::endl;
		return (1);
	}

	std::string line;
	while (std::getline(fileIn, line))
	{
		unsigned long	index;
		while ((index = line.find(s1, 0)) != std::string::npos)
		{
			line.erase(index, s1.size());
			line.insert(index, s2);
		}
		fileOut << line << std::endl;
	}
	return (0);
}
