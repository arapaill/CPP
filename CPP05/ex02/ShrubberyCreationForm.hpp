#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        const std::string	_target;
        ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyForm);
    public:
        ShrubberyCreationForm(const std::string target);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &shrubberyForm);
		
		void					execute(const Bureaucrat &bureaucrat) const;
		const std::string		getTarget(void) const;
};
std::ostream	&operator<<(std::ostream &o, const ShrubberyCreationForm &shrubberyForm);
#endif