#include <PmergeMe.hpp>

PmergeMe::PmergeMe()
{
	// std::cout<<"PmergeMe default ctor called!\n";
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	this -> arr_d = other.arr_d;
	this -> arr_v = other.arr_v;
	// std::cout<<"PmergeMe copy ctor called!\n";
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	if (this == &other)
		return *this;
	this -> arr_d = other.arr_d;
	this -> arr_v = other.arr_v;
	// std::cout<<"PmergeMe copy assignment operator called!\n";
	return *this;
}

PmergeMe::~PmergeMe()
{
	// std::cout<<"PmergeMe dtor called!\n";
}

void PmergeMe::fill(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		std::stringstream ss(argv[i]);
		long ii;
		if (ss.str().size() > 10
			|| ss.str().find_first_not_of("+0123456789") != std::string::npos
			|| (ss.str().find('+') != std::string::npos && ss.str().find_last_of('+') != 0))
			throw std::runtime_error("Invalid iput");
		ss >> ii;
		if (ii > 2147483647)
			throw std::runtime_error("Number is bigger than INT_MAX");
		arr_v.push_back(ii);
		arr_d.push_back(ii);
	}
}
void PmergeMe::print()
{
	// if (is_sorted(arr.begin(), arr.end()))
    //     std::cout << "Sorted"<<std::endl;
    // else
    //     std::cout << "Not Sorted"<<std::endl;
	for (size_t i = 0; i < arr_v.size(); i++)
		std::cout<<" "<<arr_v[i];
	std::cout<<std::endl;
}

template <typename T>
T binary_search(T big, T small)
{
	size_t i = 1;
    while (!small.empty())
    {
		if (i >= small.size())
			i = 0;
        typename T::iterator middle;
		typename T::iterator left = big.begin();
        typename T::iterator right = big.end() - 1;
		while (left < right)
        {
			middle = left + std::distance(left, right) / 2;
            if (small[i] <= *middle)
                right = middle;
			else
                left = middle + 1;
        }
		big.insert(right, small[i]);
        small.erase(small.begin() + i);
		i *= 2;
    }
    return big;
}

template <typename T>
T rec(T curr)
{
	T big;
	T small;
	if (curr.size() == 1)
		return curr;
	for (size_t i = 0; i < curr.size(); i+=2)
	{
		if (i == curr.size() - 1)
			big.push_back(curr[i]);
		else if (curr[i] > curr[i + 1])
		{			
			big.push_back(curr[i]);
			small.push_back(curr[i + 1]);
		}
		else
		{			
			big.push_back(curr[i + 1]);
			small.push_back(curr[i]);
		}
	}

	return binary_search(rec(big), small);
}

void PmergeMe::sort(int argc, char *argv[])
{
	clock_t start, end;
    double deque_time;
	double vector_time;

	this->fill(argc, argv);
	std::cout<<"Before: ";
	this->print();
	start = clock();
	this->arr_v = rec(this->arr_v);
	end = clock();
	vector_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;

	std::cout<<"After: ";
	this->print();

	start = clock();
	this->arr_d = rec(this->arr_d);
	end = clock();
	deque_time = static_cast<double>(end - start)  / CLOCKS_PER_SEC;
	std::cout<<"Time to process a range of 5 elements with std::deque : "<<deque_time<<" us\n";
	std::cout<<"Time to process a range of 5 elements with std::vector : "<<vector_time<<" us\n";
}

