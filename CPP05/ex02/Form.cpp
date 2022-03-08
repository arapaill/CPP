#include "Form.hpp"

Form::Form(void) : _name("useless"), _signed(false), _gradeSign(150), _gradeExec(150)
{}

Form::Form(const std::string name, int gradeSign, int gradeExec) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (_gradeSign < 1 || _gradeExec < 1)
		throw GradeTooHighException();
	if (_gradeSign > 150 || _gradeExec > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &form) : _gradeSign(form._gradeSign), _gradeExec(form._gradeExec)
{
	*this = form;
}

Form::~Form()
{}

Form	&Form::operator=(const Form &form)
{
	if (this != &form)
		_signed = form._signed;
	return (*this);
}

const std::string	Form::getName(void) const
{
	return (_name);
}

int		Form::getGradeSign(void) const
{
	return (_gradeSign);
}

int		Form::getGradeExec(void) const
{
	return (_gradeExec);
}

bool	Form::getSigned(void) const
{
	return (_signed);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeSign)
		throw GradeTooLowException();
	_signed = true;
}

void	Form::executeCheck(const Bureaucrat &bureaucrat) const
{
	if (!this->getSigned())
		throw Form::ExecuteNotSigned();
	if (this->getGradeExec() < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &o, const Form &form)
{
	o << form.getName() << std::endl;
	o << "signed : " << form.getSigned() << std::endl;
	o << "grade to sign : " << form.getGradeSign() << std::endl;
	o << "grade to execute : " << form.getGradeExec() << std::endl;
	return (o);
};