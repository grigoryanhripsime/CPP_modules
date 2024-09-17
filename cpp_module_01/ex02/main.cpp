#include <iostream>
#include <string>

int main(void)
{
	std::string str =  "HI THIS IS BRAIN";

	std::string *strPTR = &str;
	std::string &strREF = str;

	std::cout << "Addresses:" << std::endl;
	std::cout << &str << std::endl;
	std::cout << &strPTR << std::endl;
	std::cout << &strREF << std::endl;
	std::cout << "values:" << std::endl;
	std::cout << str << std::endl;
	std::cout << strPTR << std::endl;
	std::cout << strREF << std::endl;
}