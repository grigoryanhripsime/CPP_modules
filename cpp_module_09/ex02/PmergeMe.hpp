#pragma once

#include <vector>
#include <deque>
#include <iostream>
#include <sstream>
#include <ctime>

template <typename T>
class PmergeMe
{
	private:
		T arr;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();
		void fill(int argc, char *argv[]);
		void print();
		void sort();
};

#include "PmergeMe.tpp"