#include <PmergeMe.hpp>

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cerr<<"Invalid number of arguments!\n";
		return 1;
	}
	try
	{
		PmergeMe alg;
		alg.sort(argc, argv);
	}catch(std::exception &e)
	{
		std::cerr<<e.what()<<std::endl;
	}
}