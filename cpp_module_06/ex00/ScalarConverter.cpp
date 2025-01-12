#include "ScalarConverter.hpp"
#include <iomanip>

ScalarConverter::ScalarConverter()
{
	std::cout<<"ScalarConverter default ctor called!\n";
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	std::cout<<"ScalarConverter copy ctor called!\n";
	*this = other; 
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	if (this == &other)
		return *this;
	std::cout<<"ScalarConverter copy assignment operator called!\n";
	*this = other;
	return *this;
}

ScalarConverter::~ScalarConverter()
{
	std::cout<<"ScalarConverter dtor called!\n";
}

std::string find_type(const std::string &str)
{
	if (str.length() == 1 && ((str[0] >= 32 && str[0] < '0') || (str[0] > '9' && str[0] <= 126)))
		return "char";
	size_t i = 0;
	if (str[i] == '-')
		i++;
	for (; i < str.length(); i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9') && str[i] != 'f' && str[i] != '.')
			return "invalid";
	}
	if (str.find(".") != std::string::npos && str.find(".", str.find(".") + 1) == std::string::npos)
	{
		size_t f_index = str.find("f");
		if (f_index != 0 && f_index != std::string::npos && f_index == str.length() - 1)
			return "float";
		if (f_index == std::string::npos)
			return "double";
	}
	if (str.find(".") == std::string::npos && str.find("f") == std::string::npos)
		return "int";
	return "invalid";
}

void it_is_char(const std::string &str)
{
	std::cout<<"char: "<<str<<std::endl;
	std::cout<<"int: "<<"impossible"<<std::endl;
	std::cout<<"float: "<<"impossible"<<std::endl;
	std::cout<<"double: "<<"impossible"<<std::endl;
}

void it_is_int(const std::string &str)
{
    long long num;
    std::stringstream ss(str);
    ss >> num;
    if (ss.fail())
        throw std::exception();
    if (num < 32 || num > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(num) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
	if (num < -2147483648 || num > 2147483647)
		std::cout << "int: impossible" << std::endl;
	else
    	std::cout << "int: " << num << std::endl;
    std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(num) << std::endl;
}

void it_is_float(const std::string &str)
{
	float num;
	std::stringstream ss(str);
	ss >> num;
	if (ss.fail())
		throw std::exception();
	if (num < 32 || num > 126)
		std::cout<<"char: Non displayable"<<std::endl;
	else
		std::cout<<"char: "<<static_cast<char>(num)<<std::endl;
    std::cout << std::fixed << std::setprecision(str.length() - str.find(".") - 2);
	if (num > 2147483647 || num < -2147483648)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout<<"int: "<<static_cast<int>(num)<<std::endl;
	std::cout<<"float: "<<num<<"f"<<std::endl;
	std::cout<<"double: "<<static_cast<double>(num)<<std::endl;
}

void it_is_double(const std::string &str)
{
	double num;
	std::stringstream ss(str);
	ss >> num;
	if (ss.fail())
		throw std::exception();
	if (num < 32 || num > 126)
		std::cout<<"char: Non displayable"<<std::endl;
	else
		std::cout<<"char: "<<static_cast<char>(num)<<std::endl;
    std::cout << std::fixed << std::setprecision(str.length() - str.find(".") - 1);
	if (num > 2147483647 || num < -2147483648)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout<<"int: "<<static_cast<int>(num)<<std::endl;
	std::cout<<"float: "<<static_cast<float>(num)<<"f"<<std::endl;
	std::cout<<"double: "<<num<<std::endl;
}

void it_is_invalid(const std::string &str)
{
	if (str == "nan")
	{
		std::cout<<"char: "<<"impossible"<<std::endl;
		std::cout<<"int: "<<"impossible"<<std::endl;
		std::cout<<"float: "<<"nanf"<<std::endl;
		std::cout<<"double: "<<"nan"<<std::endl;
	}
	else if (str == "+inf" || str == "+inff")
	{
		std::cout<<"char: "<<"impossible"<<std::endl;
		std::cout<<"int: "<<"+inf"<<std::endl;
		std::cout<<"float: "<<"+inff"<<std::endl;
		std::cout<<"double: "<<"+inf"<<std::endl;
	}
	else if (str == "-inf" || str == "-inff")
	{
		std::cout<<"char: "<<"impossible"<<std::endl;
		std::cout<<"int: "<<"-inf"<<std::endl;
		std::cout<<"float: "<<"-inff"<<std::endl;
		std::cout<<"double: "<<"-inf"<<std::endl;
	}
	else
		throw std::exception();
}

void ScalarConverter::convert(const std::string &str)
{
    std::string type = find_type(str);
	std::string arr[] = {"char", "int", "float", "double"};
	int i = 0;
	while (i < 4 && type != arr[i])
		i++;
	try 
	{
		switch(i)
		{
			case 0:
				it_is_char(str);
				break ;
			case 1:
				it_is_int(str);
				break ;
			case 2:
				it_is_float(str);
				break ;
			case 3:
				it_is_double(str);
				break ;
			default:
				it_is_invalid(str);
		}
	} catch(std::exception &e)
	{
		std::cout<<"char: "<<"impossible"<<std::endl;
		std::cout<<"int: "<<"impossible"<<std::endl;
		std::cout<<"float: "<<"nan"<<std::endl;
		std::cout<<"double: "<<"nanf"<<std::endl;
	}
}
