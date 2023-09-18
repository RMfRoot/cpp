#include "Span.hpp"
#include <iostream>

int	main()
{
	Span	s;
	try{
		s.addNumber(2);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		s.longestSpan();
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	Span cp;
	if (true)
	{
		Span	d(20000);
		for (int i = 0; i < 20000; i++)
			d.addNumber(i*2);
		std::cout << d.longestSpan() << std::endl;
		std::cout << d.shortestSpan() << std::endl;
		cp = d;
	}
	std::cout << cp.longestSpan() << std::endl;
	std::cout << cp.shortestSpan() << std::endl;
	std::vector<int> vec;
	vec.push_back(234);
	vec.push_back(123);
	cp = Span(10);
	cp.addNumber(vec.begin(), vec.end());
	std::cout << cp.longestSpan() << std::endl;
	std::cout << cp.shortestSpan() << std::endl;
}