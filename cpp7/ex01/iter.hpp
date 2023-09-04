#ifndef ITER_HPP
# define ITER_HPP
# include <cstddef>
# include <iostream>

template <typename T, typename F> void	iter(T *addr, std::size_t lenght, F fction(T param))
{
	if (!addr)
		return;
	for (unsigned int i = 0; i < lenght; i++)
		fction(addr[i]);
}

template <typename T, typename F> void	iter(T const *addr, std::size_t lenght, F fction(T const param))
{
	if (!addr)
		return;
	for (unsigned int i = 0; i < lenght; i++)
		fction(addr[i]);
}

template <typename T, typename F> void	iter(T *addr, std::size_t lenght, F fction(T &param))
{
	if (!addr)
		return;
	for (unsigned int i = 0; i < lenght; i++)
		fction(addr[i]);
}

template <typename T, typename F> void	iter(T const *addr, std::size_t lenght, F fction(T const &param))
{
	if (!addr)
		return;
	for (unsigned int i = 0; i < lenght; i++)
		fction(addr[i]);
}

template <typename T> void	add(T &var) {var++;}

template <typename T> T printAndReturn(T var) {std::cout << var << std::endl; return var;}

#endif