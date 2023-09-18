#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>

class NoElementFound : public std::exception {const char* what() const throw() {return "No element was found";}};

template <typename T>
typename T::iterator	easyfind(T &container, int find)
{
	typename T::iterator	it;
	it = std::find(container.begin(), container.end(), find);
	if (it == container.end())
		throw NoElementFound();
	return it;
}

template <typename T>
const typename T::iterator	easyfind(const T &container, int find)
{
	typename T::iterator	it;
	it = std::find(container.begin(), container.end(), find);
	if (it == container.end())
		throw NoElementFound();
	return it;
}

#endif