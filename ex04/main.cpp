#include <string>
#include <iostream>
#include <fstream>

void replace(std::ifstream& fileIn, std::ofstream& fileOut, const std::string& s1, const std::string& s2)
{
	std::string line;
	unsigned long index;

	while (std::getline(fileIn, line))
	{
		index = 0;
		while ((index = line.find(s1, index)) != std::string::npos)
		{
			line.erase(index, s1.size());
			line.insert(index, s2);
			index += s2.length();
		}
		fileOut << line << std::endl;
	}
}

int main(int argc, char **argv)
{
	std::string filename, s1, s2;

	if (argc < 4)
	{
		std::cout << "not enough arguments" << std::endl;
		return (1);
	}

	filename = argv[1];

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

	replace(fileIn, fileOut, argv[2], argv[3]);
	return (0);
}
