#include <PmergeMe.hpp>

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cerr<<"Invalid number of arguments!\n";
		return 1;
	}

	PmergeMe<std::deque<int> > sorter;
	try
	{
		sorter.fill(argc, argv);
		// sorter.print();
		sorter.sort();
		sorter.print();
	}catch(std::exception &e)
	{
		std::cerr<<e.what()<<std::endl;
	}
}