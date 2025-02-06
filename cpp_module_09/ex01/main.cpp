#include <RPN.hpp>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr<<"Invalid number of arguments!\n";
		return 1;
	}
	RPN calculator;
	try 
	{
		int res = calculator.calculate(argv[1]);
		std::cout<<res<<std::endl;
	} catch(std::runtime_error &e)
	{
		std::cerr<<e.what()<<std::endl;
	}
}