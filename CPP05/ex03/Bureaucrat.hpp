#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP


# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string	_name;
		int					_grade;
    public:
        Bureaucrat(void);
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &bureaucrat);
		virtual ~Bureaucrat();

        Bureaucrat	&operator=(const Bureaucrat &bureaucrat);

        class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat::exception : Grade is too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat::exception : Grade is too low");
				}
		};

        std::string			getName(void) const;
		int					getGrade(void) const;
		void				upGrade(void);
		void				downGrade(void);
		void				signForm(Form &form) const;
		void				executeForm(const Form &form) const;
};
std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat);

#endif