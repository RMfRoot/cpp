#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &S);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &S);
		~ShrubberyCreationForm();
		void	execute(Bureaucrat const &executor) const;
		AForm	*clone(std::string target);
};




#endif