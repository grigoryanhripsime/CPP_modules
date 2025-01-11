#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
	{
		std::cout<<"Invalid number of arguments!\n";
		return 1;
	}
	ScalarConverter::convert(argv[1]);
	std::cout<<"Im here\n";
}