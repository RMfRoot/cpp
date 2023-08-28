#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_executeGrade;
	public:
		class GradeTooHighExecption : public std::exception {const char	*what() const throw();};
		class GradeTooLowExecption : public std::exception {const char	*what() const throw();};
		AForm(std::string name, int signGrade, int executeGrade);
		AForm(const AForm &f);
		AForm	&operator=(const AForm &f);
		~AForm();
		void		beSigned(const Bureaucrat &b);
		std::string	getName() const;
		bool		isSigned() const;
		int	getSignGrade() const;
		int	getExecuteGrade() const;
};

std::ostream	&operator<<(std::ostream &out, const AForm &b);

#endif