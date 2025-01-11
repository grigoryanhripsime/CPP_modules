#pragma once

#include <iostream>
#include <sstream>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter();
    public:
        static void convert(const std::string &str);
};