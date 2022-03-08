#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Form		*formulaire = new ShrubberyCreationForm("GreanPeace");
	Bureaucrat	Bob("Bob", 1);
	Bureaucrat	Paul("Paul", 140);

	Bob.executeForm(*formulaire);
	Bob.signForm(*formulaire);
	std::cout << *formulaire << std::endl;
	std::cout << Bob << std::endl;
	Bob.executeForm(*formulaire);
	Paul.executeForm(*formulaire);
	delete formulaire;

	std::cout << "-----------------------------" << std::endl;

	Form		*Terminatorisation = new RobotomyRequestForm("Arnold");
	Bureaucrat	SkyNet("SkyNet", 1);

	SkyNet.executeForm(*Terminatorisation);
	SkyNet.signForm(*Terminatorisation);
	std::cout << *Terminatorisation << std::endl;
	std::cout << SkyNet << std::endl;
	SkyNet.executeForm(*Terminatorisation);

	delete Terminatorisation;

	std::cout << "-----------------------------" << std::endl;
	
	Form		*presidential = new PresidentialPardonForm("TRUMP");
	Bureaucrat	Alex("ALEX", 6);

	Alex.executeForm(*presidential);
	Alex.signForm(*presidential);
	Alex.executeForm(*presidential);
	Alex.upGrade();
	Alex.executeForm(*presidential);
	delete presidential;

	return (0);
}