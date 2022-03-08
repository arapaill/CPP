
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Presidential pardon", 25, 5), _target("unknown")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("Presidential pardon", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidential)
{
	*this = presidential;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &presidential)
{
	(void)presidential;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const PresidentialPardonForm &form)
{
	o << form.getName()<< std::endl;
	o <<"signed : " << form.getSigned() << std::endl;
	o << "target : " << form.getTarget() << std::endl;
	o << "grade needed to sign : " << form.getGradeSign() << std::endl;
	o << "grade needed to execute : " << form.getGradeExec() << std::endl;
	return (o);
};

void	PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const
{
	this->Form::executeCheck(bureaucrat);
	std::cout << _target << " was forgiven by Zafor Beeblebrox" << std::endl;
}

const std::string	PresidentialPardonForm::getTarget(void) const
{
	return (_target);
}