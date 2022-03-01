#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int ft_exit(std::string str)
{
    std::cerr << str << std::endl;
    return(1);
}

void	replaceStrings(std::ofstream &fileOut, std::string s1, std::string s2, std::string input)
{
	size_t	pos;
	size_t	toSkip;

	pos = input.find(s1);
	if (pos == std::string::npos)
	{
		fileOut << input;
		return ;
	}
	else
	{
		fileOut << input.substr(0, pos);
		fileOut << s2;
		toSkip = pos + s1.length();
		replaceStrings(fileOut, s1, s2, input.substr(toSkip));
	}
}

int	main(int argc, char **argv)
{
	std::ifstream	fileIn;
	std::ofstream	fileOut;
	std::string		s1;
	std::string		s2;
	std::string		buff;
	std::string		file;
	std::string		fileReplace;

	if (argc != 4)
		return (ft_exit("Error : wrong number of arguments, use ./replace file s1 s2"));
	s1 = argv[2];
	s2 = argv[3];
	file = argv[1];
	fileIn.open(file.c_str());
	if (fileIn.good() == false)
		return (ft_exit("Error : input file"));
	fileReplace = file + ".replace";
	fileOut.open(fileReplace.c_str());
	if (fileOut.good() == false)
	{
		fileIn.close();
		return (ft_exit("Error : output file"));
	}
	while (getline(fileIn, buff))
		replaceStrings(fileOut, s1, s2, buff + '\n');
	fileIn.close();
	fileOut.close();
	return (0);
}