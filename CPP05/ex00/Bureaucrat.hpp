#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
    private:
        const std::string	_name;
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

        const std::string			getName(void) const;
		int					getGrade(void) const;
		void				upGrade(void);
		void				downGrade(void);
};
std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat);

#endif