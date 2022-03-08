#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery creation", 145, 137), _target("unknown")
{
}


ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("Shrubbery creation", 145, 137), _target(target)
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyForm)
{
	*this = shrubberyForm;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberyForm)
{
	(void)shrubberyForm;
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const
{
	std::ofstream	file;

	this->Form::executeCheck(bureaucrat);
	file.open((_target + "_shrubbery").c_str());
	if (file.good() == false)
		throw FileOpeningFail();
	file << "       _-_" << std::endl;
	file << "    /~~   ~~\\" << std::endl;
	file << " /~~         ~~\\" << std::endl;
	file << "{               }" << std::endl;
	file << " \\  _-     -_  /" << std::endl;
	file << "   ~  \\ \\/\\/  ~" << std::endl;
	file << "_- -   | | _- _" << std::endl;
	file << "  _ -  | |   -_" << std::endl;
	file << "      \\/\\/ \\" << std::endl;
	file.close();
}

const std::string	ShrubberyCreationForm::getTarget() const
{
	return(_target);
}