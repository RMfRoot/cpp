#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	siz = 0;
	arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	siz = n;
	arr = new T[n];
	for (unsigned int i = 0; i < siz; i++)
		arr[i] = T();
}

template <typename T>
Array<T>::Array(const Array &a)
{
	siz = a.siz;
	arr = new T[siz];
	for (unsigned int i = 0; i < siz; i++)
		arr[i] = a[i];
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &a)
{
	delete[] arr;
	siz = a.siz;
	arr = new T[siz];
	for (unsigned int i = 0; i < siz; i++)
		arr[i] = a[i];
	return *this;
}

template <typename T>
T	&Array<T>::operator[](std::size_t i)
{
	if (i >= siz)
		throw std::exception();
	return arr[i];
}

template <typename T>
const T	&Array<T>::operator[](std::size_t i) const
{
	if (i >= siz)
		throw std::exception();
	return arr[i];
}

template <typename T>
Array<T>::~Array()
{
	delete[] arr;
}

template <typename T>
std::size_t	Array<T>::size() const
{
	return siz;
}