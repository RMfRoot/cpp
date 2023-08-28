#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <exception>
# include <iostream>

class Bureaucrat
{
	private:
		const std::string	_name;
		int			_grade;
	public:
		class GradeTooHighExecption : public std::exception {const char	*what() const throw();};
		class GradeTooLowExecption : public std::exception {const char	*what() const throw();};
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &b);
		Bureaucrat		&operator=(const Bureaucrat &b);
		~Bureaucrat();
		std::string	getName() const;
		int			getGrade() const;
		void		gradeUp();
		void		gradeDown();
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &B);

#endif