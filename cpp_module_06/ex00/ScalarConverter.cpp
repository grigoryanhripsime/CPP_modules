#include "ScalarConverter.hpp"

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
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!(str[i] > '0' && str[i] < '9') && str[i] != 'f' && str[i] != '.' && str[i] != '-')
			return "invalid";
	}
	if (str.find("-") != 0 && str.find("-", 1) != std::string::npos) // mi hat imaci chi kara lini "    -1"
		return "invalid";
	size_t dot_index = str.find(".");
	if (dot_index != std::string::npos && str.find(".", dot_index + 1) != std::string::npos)
	{
		size_t f_index = str.find("f");
		if (f_index != 0 && f_index != std::string::npos && f_index == str.length() - 1)
			return "float";
		if (f_index == std::string::npos)
			return "double";
	}
	if (str.find(".") == std::string::npos && str.find("f") == std::string::npos)
		return "int";
	if (str.length() == 1 && !(str[0] < 32 || str[0] > 126))
		return "char";
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
			std::cout<<"Im here1\n";
	int num;
	std::stringstream ss(str);
	ss >> num;
	if (ss.fail())
		throw std::exception();
	if (num < 32 || num < 126)
		std::cout<<"char: "<<"imposible"<<std::endl;
	else
		std::cout<<"char: "<<static_cast<char>(num)<<std::endl;
	std::cout<<"int: "<<num<<std::endl;
	std::cout<<"float: "<<static_cast<float>(num)<<std::endl;
	std::cout<<"double: "<<static_cast<double>(num)<<std::endl;
}

void it_is_float(const std::string &str)
{
	float num;
	std::stringstream ss(str);
	ss >> num;
	if (ss.fail())
		throw std::exception();
	if (num < 32 || num < 126)
		std::cout<<"char: "<<"imposible"<<std::endl;
	else
		std::cout<<"char: "<<static_cast<char>(num)<<std::endl;
	std::cout<<"int: "<<static_cast<int>(num)<<std::endl;
	std::cout<<"float: "<<num<<std::endl;
	std::cout<<"double: "<<static_cast<double>(num)<<std::endl;
}

void it_is_double(const std::string &str)
{
	float num;
	std::stringstream ss(str);
	ss >> num;
	if (ss.fail())
		throw std::exception();
	if (num < 32 || num < 126)
		std::cout<<"char: "<<"imposible"<<std::endl;
	else
		std::cout<<"char: "<<static_cast<char>(num)<<std::endl;
	std::cout<<"int: "<<static_cast<int>(num)<<std::endl;
	std::cout<<"float: "<<static_cast<float>(num)<<std::endl;
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
	if (str == "+inf")
	{
		//TODO: write messages
	}
	if (str == "-inf")
	{
		//TODO: write messages
	}
	if (str == "+inff")
	{
		//TODO: write messages
	}
	if (str == "-inff")
	{
		//TODO: write messages
	}
}

void ScalarConverter::convert(const std::string &str)
{
    std::string type = find_type(str);
	std::cout<<type<<std::endl;
	std::string arr[] = {"char", "int", "float", "double"};
	int i = 0;
	while (i < 4 && type != arr[i])
		i++;
	std::cout<<"i = "<<i<<std::endl;
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
			it_is_invalid(str); //here check for nan, -inff, +inff, -inf, +inf
	}
}
