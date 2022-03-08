#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat  Roger("Roger", 1);
        Bureaucrat  Paul("Paul", 15);
        Paul.upGrade();
        std::cout << Paul << std::endl;
        Roger.upGrade();
        std::cout << Roger << std::endl;
        Bureaucrat  Julie("Julie", 0);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat  Sarah("Sarah", 151);
        std::cout << Sarah << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
}