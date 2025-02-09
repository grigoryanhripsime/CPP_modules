#include <RPN.hpp>

RPN::RPN()
{
	// std::cout<<"RPN default ctor called!\n";
}

RPN::RPN(const RPN &other)
{
	this->nums = other.nums;
	// std::cout<<"RPN copy ctor called!\n";
}

RPN &RPN::operator=(const RPN &other)
{
	if (this == &other)
		return *this;
	this->nums = other.nums;
	// std::cout<<"RPN copy assignment operator called!\n";
	return *this;
}

RPN::~RPN()
{
	// std::cout<<"RPN dtor called!\n";
}

int RPN::calculate(std::string input)
{
	std::stringstream ss(input);
	std::string word;
	long last_val;
	long current_val;
	while (ss >> word)
	{
		if (word.size() != 1 || word.find_first_not_of("0123456789+-*/") != std::string::npos)
			throw std::runtime_error("Invalid argumnet!");
		if (word[0] >= '0' && word[0] <= '9')
			nums.push(word[0] - '0');
		else if (word[0] == '+' || word[0] == '-' || word[0] == '*' || word[0] == '/')
		{
			if (nums.size() < 2)
				throw std::runtime_error("Not enough numbers!");

			current_val = nums.top();
			nums.pop();
			last_val = nums.top();
			nums.pop();

			switch (word[0])
			{
				case '+':
					last_val += current_val;
					break ;
				case '-':
					last_val -= current_val;
					break ;
				case '*':
					last_val *= current_val;
					break ;
				case '/':
					if (current_val == 0)
						throw std::runtime_error("Can't divide by 0!");
					last_val /= current_val;
			}
			if (last_val > 2147483647)
				throw std::runtime_error("Number is going to be overflowed!");
			nums.push(last_val);
		}
	}
	if (nums.size() != 1)
		throw std::runtime_error("Not enough operations!");
	return nums.top();
}
