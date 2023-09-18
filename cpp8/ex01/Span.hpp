#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <algorithm>

class Span
{
	private:
		size_t				_n;
		std::vector<int>	_values;
	public:
		class outOfRange : public std::exception {const char* what() const throw();};
		class notEnouthElements : public std::exception {const char* what() const throw();};
		Span();
		Span(size_t n);
		Span(const Span &span);
		Span	&operator=(const Span &span);
		~Span();
		void	addNumber(int nbr);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();
};

#endif