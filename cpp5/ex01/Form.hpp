#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_executeGrade;
	public:
		class GradeTooHighExecption : public std::exception {const char	*what() const throw();};
		class GradeTooLowExecption : public std::exception {const char	*what() const throw();};
		Form(std::string name, int signGrade, int executeGrade);
		Form(const Form &f);
		Form	&operator=(const Form &f);
		~Form();
		void		beSigned(const Bureaucrat &b);
		std::string	getName() const;
		bool		isSigned() const;
		int	getSignGrade() const;
		int	getExecuteGrade() const;
};

std::ostream	&operator<<(std::ostream &out, const Form &b);

#endif