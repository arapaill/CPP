
#include "Intern.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(const Intern &intern)
{
	*this = intern;
}

Intern::~Intern()
{
	return ;
}


Intern	&Intern::operator=(const Intern &intern)
{
	(void)intern;
	return (*this);
}

static const std::string	lowerStr(const std::string str)
{
	std::string	res;

	for (unsigned int i = 0; i < str.size(); i++)
		res += tolower(str[i]);
	return (res);
}

Form	*Intern::makeForm(const std::string formName, const std::string target) const
{
	Form	*forms[3] = { new ShrubberyCreationForm(target),
						new RobotomyRequestForm(target), 
						new PresidentialPardonForm(target) };
	Form	*formPtr = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (lowerStr(formName) == lowerStr(forms[i]->getName()))
		{
			formPtr = forms[i];
			break;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (formPtr != forms[i])
			delete forms[i];
	}
	if (formPtr)	
		std::cout << "Intern" << " creates " << formPtr->getName() <<  " formular" << std::endl;
	else
		std::cout << "Intern" << " cannot create " << formName << std::endl;
	return (formPtr);
	
}