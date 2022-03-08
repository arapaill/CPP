#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    protected:
        const std::string   _name;
        bool				_signed;
        int					_gradeSign;
        int                 _gradeExec;
    public:
		Form(void);
		Form(const std::string name, int gradeSign, int gradeExec);
		Form(const Form &form);
		virtual ~Form();

		Form	&operator=(const Form &form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return ("grade is too high"); }
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return ("grade is too low"); }
		};
		class ExecuteNotSigned : public std::exception
		{
			public:
				virtual const char *what() const throw() { return ("form is not signed"); }
		};
		
		class FileOpeningFail : public std::exception
		{
			public:
				virtual const char *what() const throw() { return ("file cannot be opened"); }
		};

		const std::string	getName(void) const;
		int					getGradeSign(void) const;
		int					getGradeExec(void) const;
		bool				getSigned(void) const;
		void				beSigned(const Bureaucrat &bureaucrat);
		virtual void		execute(const Bureaucrat &bureaucrat) const = 0;
		virtual void		executeCheck(const Bureaucrat &bureaucrat) const;

};
std::ostream	&operator<<(std::ostream &o, const Form &form);

# endif