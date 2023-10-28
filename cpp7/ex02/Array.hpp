#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <cstring>
# include <exception>

template <typename T> class Array
{
	private:
		T			*arr;
		std::size_t siz;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &a);
		Array	&operator=(const Array &a);
		T		&operator[](std::size_t i);
		const T		&operator[](std::size_t i) const;
		~Array();
		std::size_t	size() const;
};

#include "Array.tpp"

#endif