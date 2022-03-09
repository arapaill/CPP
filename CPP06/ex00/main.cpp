
#include "Conversion.hpp"

int		checkpoint(std::string s)
{
    int count = 0;
    for (int i = 0; s[i]; i++) 
	{
		if (s[i] == '.')
        count++;
    }
	if(count == 2)
		return(0);
	return (1);
}

int		checkf(std::string s)
{
    for (int i = 0; s[i]; i++) 
	{
		if (s[i] == 'f' && s[i + 1])
			return(0);
    }
	return (1);
}

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Wrong number of args\n";
		return 1;
	}
	if(!checkpoint(argv[1]) || !checkf(argv[1]))
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: Impossible" << std::endl;
		std::cout << "double: Impossible" << std::endl;
		return(1);
	}
	Conversion nb(argv[1]);
	std::cout << std::fixed << std::setprecision(1);
	
	char	c = nb;
	int		i = nb;
	float	f = nb;
	double	d = nb;

	(void)c;
	(void)i;
	(void)f;
	(void)d;
	return 0;
}