
#include "RobotonyRequestForm.hpp"


RobotonyRequestForm::RobotonyRequestForm(std::string target) : AForm("robotony request", 72, 45), _target(target) {}

RobotonyRequestForm::RobotonyRequestForm(const RobotonyRequestForm &S) : AForm(S.getName(), S.getSignGrade(), S.getExecuteGrade()), _target(S._target) {}

RobotonyRequestForm	&RobotonyRequestForm::operator=(const RobotonyRequestForm &S)
{
	_target = S._target;
	return (*this);

}

RobotonyRequestForm::~RobotonyRequestForm() {}

void	RobotonyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!isSigned())
		throw FormNotSignedExecption();
	if (getExecuteGrade() < executor.getGrade())
		throw GradeTooLowExecption();
	std::srand(std::time(NULL));
	std::cout << "BZZZZZ BZZZZZZ BAM BIM BOUM" << std::endl;
	if (std::rand() % 2 == 1)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << _target << " robotomization has failed" << std::endl;
}