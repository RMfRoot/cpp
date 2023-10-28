#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &cp) {(void)cp;}

PmergeMe	&PmergeMe::operator=(const PmergeMe &cp) {(void)cp; return *this;}

const char *PmergeMe::InvalidArgument::what() const throw() {return "Invalid argument(s)";}

const char *PmergeMe::NoArgument::what() const throw() {return "No arguments";}

const char *PmergeMe::Overflow::what() const throw() {return "Int overflow";}

const char *PmergeMe::NegativeNbr::what() const throw() {return "Negative Number";}

PmergeMe::~PmergeMe() {}

void	parse(int argc, char **argv, std::list<int>	&input)
{
	if (argc < 2)
		throw PmergeMe::NoArgument();
	for (int i = 1; i < argc; i++)
	{
		char	*end = argv[i];
		while (*end)
		{
			long	value = std::strtol(end, &end, 0);
			if (errno == ERANGE || value > INT_MAX || value < INT_MIN)
			{
				errno = 0;
				throw PmergeMe::Overflow();
			}
			else if (value < 0)
				throw PmergeMe::NegativeNbr();
			else if (!isdigit(*end) && !isspace(*end) && *end)
				throw PmergeMe::InvalidArgument();
			if (isspace(*end))
				end++;
			input.push_back(static_cast<int>(value));
		}
	}
	std::list<int> doubl = input;
	doubl.sort();
	doubl.unique();
	if (input.size() != doubl.size())
		throw PmergeMe::InvalidArgument();
}

void	printList(const std::list<int> &list)
{
	std::cout << "Before:\t";
	for (std::list<int>::const_iterator i = list.begin(); i != list.end(); i++)
		std::cout << *i << ' ';
	std::cout << std::endl;
}

void	printRes(const std::list<int> &list, double lTime, double vTime)
{
	std::cout << "After:\t";
	for (std::list<int>::const_iterator i = list.begin(); i != list.end(); i++)
		std::cout << *i << ' ';
	std::cout << std::endl;
	std::cout << "Time to process a range of " << list.size() << " elements with std::list : " << lTime << " us" << std::endl;
	std::cout << "Time to process a range of " << list.size() << " elements with std::vector : " << vTime << " us" << std::endl;
}

template <typename T> void	sortContainer(T &container)
{
	if (container.size() <= 1)
		return;
	size_t	mid = container.size() / 2;
	typename T::iterator i = container.begin();
	std::advance(i, mid);
	T otherHalf(i, container.end());
	container.resize(mid);
	sortContainer(container);
	sortContainer(otherHalf);
	T result;
	result.resize(container.size() + otherHalf.size());
	std::set_union(container.begin(), container.end(), otherHalf.begin(), otherHalf.end(), result.begin());
	container = result;
}

void	PmergeMe::sort(int argc, char **argv)
{
	clock_t parseTime = std::clock();
	std::list<int>	lInput;
	parse(argc, argv, lInput);
	std::vector<int>	vInput(lInput.begin(), lInput.end());
	printList(lInput);
	double finalParseTime = static_cast<double>(std::clock() - parseTime) / static_cast<double>(CLOCKS_PER_SEC) * 100000;

	clock_t lTime = std::clock();
	sortContainer(lInput);
	double finalLTime = static_cast<double>(std::clock() - lTime) / static_cast<double>(CLOCKS_PER_SEC) * 100000 + finalParseTime;

	clock_t vTime = std::clock();
	sortContainer(vInput);
	double finalVTime = static_cast<double>(std::clock() - vTime) / static_cast<double>(CLOCKS_PER_SEC) * 100000 + finalParseTime;
	printRes(lInput, finalLTime, finalVTime);
}