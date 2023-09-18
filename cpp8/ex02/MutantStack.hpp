#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack(): std::stack<T, Container>() {};
		MutantStack(const MutantStack &mutant): std::stack<T, Container>(mutant) {};
		MutantStack	&operator=(const MutantStack &mutant) {std::stack<T, Container>::operator=(mutant); return *this;};
		~MutantStack() {};
		typedef typename Container::iterator iterator;
		iterator	begin() {return this->c.begin();};
		iterator	end() {return this->c.end();};
};

#endif