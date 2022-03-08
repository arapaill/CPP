#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <ctime>
# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		const std::string	_target;
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &robotomy);
		
	public:
		RobotomyRequestForm(const std::string target);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm	&operator=(const RobotomyRequestForm &robotomy);

		void					execute(const Bureaucrat &bureaucrat) const;
		const std::string		getTarget(void) const;
};
std::ostream	&operator<<(std::ostream &o, const RobotomyRequestForm &robotomy);

#endif