#ifndef INTERN_HPP
# define INTERN_HPP
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotonyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		AForm	*formArr[3];
	public:
		class FormNotFoundExecption : public std::exception {const char	*what() const throw();};
		Intern();
		Intern(const Intern &intern);
		Intern	&operator=(const Intern &intern);
		~Intern();
		AForm	*makeForm(std::string formName, std::string target);
};


#endif