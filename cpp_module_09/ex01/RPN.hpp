#pragma once

#include <iostream>
#include <stack>
#include <sstream>

class RPN
{
	private:
		std::stack<int> nums;
	public:
		RPN();
		RPN(const RPN &other);
		RPN &operator=(const RPN &other);
		~RPN();
		int calculate(std::string input);
};