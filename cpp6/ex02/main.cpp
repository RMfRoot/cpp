#include "Base.hpp"
#include "C.hpp"
#include "B.hpp"
#include "A.hpp"

int	main(void)
{
	Base b;
	Base *rand = Base::generate();

	Base::identify(rand);
	Base::identify(*rand);
	Base::identify(&b);
	Base::identify(b);
	Base::identify(NULL);
}