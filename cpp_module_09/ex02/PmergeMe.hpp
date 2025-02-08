#pragma once

#include <vector>
#include <deque>
#include <iostream>
#include <sstream>
#include <ctime>

class PmergeMe
{
	private:
		std::deque<int> arr_d;
		std::vector<int> arr_v;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();
		void fill(int argc, char *argv[]);
		void print();
		void sort(int argc, char *argv[]);
};
