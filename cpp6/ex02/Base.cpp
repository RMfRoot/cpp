#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base::~Base() {}

Base	*Base::generate(void)
{
	std::srand(std::time(NULL));
	int i = std::rand() % 3;
	switch (i)
	{
		case 0:
			return(new A());
		case 1:
			return(new B());
		case 2:
			return(new C());
	}
	return (NULL);
}

void	Base::identify(Base *p)
{
	if (!p)
		std::cout << "Null pointer" << std::endl;
	else if (dynamic_cast<A*>(p))
		std::cout << "Object is of type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Object is of type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Object is of type C" << std::endl;
	else
		std::cout << "Object is of type Base" << std::endl;
}

void	Base::identify(Base &p)
{
	try{
		dynamic_cast<A&>(p);
		std::cout << "Object is of type A" << std::endl;
		return;
	}
	catch(std::bad_cast &e) {}
	try{
		dynamic_cast<B&>(p);
		std::cout << "Object is of type B" << std::endl;
		return;
	}
	catch(std::bad_cast &e) {}
	try{
		dynamic_cast<C&>(p);
		std::cout << "Object is of type C" << std::endl;
		return;
	}
	catch(std::bad_cast &e) {}
	std::cout << "Object is of type Base" << std::endl;
}