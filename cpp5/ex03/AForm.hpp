#ifndef AFORM_HPP
# define AFORM_HPP
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
		class FormNotSignedExecption : public std::exception {const char	*what() const throw();};
		AForm(std::string name, int signGrade, int executeGrade);
		AForm(const AForm &f);
		AForm	&operator=(const AForm &f);
		virtual	~AForm();
		void		beSigned(const Bureaucrat &b);
		std::string	getName() const;
		bool		isSigned() const;
		int	getSignGrade() const;
		int	getExecuteGrade() const;
		virtual void	execute(Bureaucrat const &executor) const = 0;
		virtual	AForm	*clone(std::string target) = 0;
};

std::ostream	&operator<<(std::ostream &out, const AForm &b);

#endif