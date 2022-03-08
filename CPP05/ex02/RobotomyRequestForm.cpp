#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy request", 72, 45), _target("unknown")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("Robotomy request", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomy)
{
	*this = robotomy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomy)
{
	(void)robotomy;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const RobotomyRequestForm &form)
{
	o <<  form.getName() << std::endl;
	o << "signed : " << form.getSigned() << std::endl;
	o << "target : " << form.getTarget() << std::endl;
	o << "grade sign : " << form.getGradeSign() << std::endl;
	o << "grade execute : " << form.getGradeExec() << std::endl;
	return (o);
};

void	RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
	int	robotomized;

	this->Form::executeCheck(bureaucrat);
	std::cout << "Sarah Connor ? ";
	robotomized = rand() % 2;
	if (robotomized)
		std::cout << _target << " is the TERMINATOR" << std::endl;
	else
		std::cout << _target <<  " is not the TERMINATOR" << std::endl;
	
}

const std::string	RobotomyRequestForm::getTarget(void) const
{
	return (_target);
}