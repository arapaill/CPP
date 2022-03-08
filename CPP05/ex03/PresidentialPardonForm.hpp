
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		const std::string	_target;
		PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm &presidential);
		
	public:
		PresidentialPardonForm(const std::string &target);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm	&operator=(const PresidentialPardonForm &presidential);

		void					execute(const Bureaucrat &Bureaucrat) const;
		const std::string		getTarget(void) const;
};

std::ostream	&operator<<(std::ostream &o, const PresidentialPardonForm &presidential);

#endif