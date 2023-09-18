#include "MutantStack.hpp"
#include <iostream>
#include <list>

int	main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << std::endl;

	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	std::cout << lst.back() << std::endl;
	lst.pop_back();
	std::cout << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	//[...]
	lst.push_back(0);
	std::list<int>::iterator lit = lst.begin();
	std::list<int>::iterator lite = lst.end();
	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	std::cout << std::endl;
	
	MutantStack<int, std::list<int> > mstackl;
	mstackl.push(5);
	mstackl.push(17);
	std::cout << mstackl.top() << std::endl;
	mstackl.pop();
	std::cout << mstackl.size() << std::endl;
	mstackl.push(3);
	mstackl.push(5);
	mstackl.push(737);
	//[...]
	mstackl.push(0);
	MutantStack<int, std::list<int> >::iterator mit = mstackl.begin();
	MutantStack<int, std::list<int> >::iterator mite = mstackl.end();
	++mit;
	--mit;
	while (mit != mite)
	{
		std::cout << *mit << std::endl;
		++mit;
	}
	std::cout << std::endl;

	MutantStack<int, std::deque<int> > a = mstack;
	MutantStack<int>::iterator ait = a.begin();
	MutantStack<int>::iterator aite = a.end();
	++ait;
	--ait;
	while (ait != aite)
	{
		std::cout << *ait << std::endl;
		++ait;
	}
}