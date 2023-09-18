#include "Span.hpp"

const char *Span::outOfRange::what() const throw() {return "can't add any more elements to Span";}

const char *Span::notEnouthElements::what() const throw() {return "not enouth elements to execute";}

Span::Span() : _n(0)
{
	_values = std::vector<int>(0);
}

Span::Span(size_t n) : _n(n)
{
	_values = std::vector<int>(0);
}

Span::Span(const Span &span) : _n(span._n), _values(span._values) {}

Span	&Span::operator=(const Span &span)
{
	_n = span._n;
	_values = span._values;
	return *this;
}

Span::~Span() {}

void	Span::addNumber(int nbr)
{
	if (_values.size() >= _n)
		throw outOfRange();
	_values.push_back(nbr);
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_values.size() + std::distance(begin, end) >= _n)
		throw outOfRange();
	_values.insert(_values.end(), begin, end);
}

int	Span::shortestSpan()
{
	std::vector<int> tmp(2);
	if (_values.size() < 2)
		throw notEnouthElements();
	std::partial_sort_copy(_values.begin(), _values.end(), tmp.begin(), tmp.end());
	return std::abs(tmp[1] - tmp[0]);
}

#include <iostream>

int	Span::longestSpan()
{
	if (_values.size() < 2)
		throw notEnouthElements();
	return std::abs(*std::max_element(_values.begin(), _values.end()) - *std::min_element(_values.begin(), _values.end()));
}