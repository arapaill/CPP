
#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	karen;
	int		lvl;

	if (argc != 2)
	{
	    std::cout << "Wrong number of arguments. Use ./karenFilter LEVEL." << std::endl;
	    return (1);
    }
	lvl = getLevel(argv[1]);
	switch(lvl)
	{
		case 0 :
        {
			karen.complain("DEBUG");
        }
		case 1 :
        {
			karen.complain("INFO");
        }
		case 2 :
        {
			karen.complain("WARNING");
        }
		case 3 :
        {
			karen.complain("ERROR");
			break ;
        }
		default :
			std::cout << "[ Probably complaining about insignificant problem. ]" << std::endl;
	}
	return (0);
}