#ifndef ROBOTONYREQUESTFORM_HPP
# define ROBOTONYREQUESTFORM_HPP
# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

class RobotonyRequestForm : public AForm
{
	private:
		std::string _target;
	public:
		RobotonyRequestForm(const std::string target);
		RobotonyRequestForm(const RobotonyRequestForm &S);
		RobotonyRequestForm &operator=(const RobotonyRequestForm &S);
		~RobotonyRequestForm();
		void	execute(Bureaucrat const &executor) const;
};




#endif