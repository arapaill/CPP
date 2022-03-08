
#include "Intern.hpp"
int main()
{
	Bureaucrat	pres("President TRUMP", 1);
	Intern		exploitedIntern;
	Form		*forms[4];

	forms[0] = exploitedIntern.makeForm("shrubbery creation", "Target1");
	forms[1] = exploitedIntern.makeForm("robotomy request", "Target2");
	forms[2] = exploitedIntern.makeForm("presidential pardon", "Target3");
	forms[3] = exploitedIntern.makeForm("formular", "Target4");

	for (int i = 0; i < 4; i++)
	{
		if (forms[i])
		{
			pres.signForm(*(forms[i]));
			pres.executeForm(*(forms[i]));
		}
	}

	for (int i = 0; i < 4; i++)
		delete forms[i];
	return (0);
}