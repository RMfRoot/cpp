
#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("presidential pardon", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &S) : AForm(S.getName(), S.getSignGrade(), S.getExecuteGrade()), _target(S._target) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &S)
{
	_target = S._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!isSigned())
		throw FormNotSignedExecption();
	if (getExecuteGrade() < executor.getGrade())
		throw GradeTooLowExecption();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}