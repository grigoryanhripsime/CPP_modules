
#include <PmergeMe.hpp>
using std::cout;
using std::endl;

template <typename T>
PmergeMe<T>::PmergeMe()
{
	std::cout<<"PmergeMe default ctor called!\n";
}

template <typename T>
PmergeMe<T>::PmergeMe(const PmergeMe<T> &other)
{
	(void) other;
	std::cout<<"PmergeMe copy ctor called!\n";
}

template <typename T>
PmergeMe<T> &PmergeMe<T>::operator=(const PmergeMe<T> &other)
{
	(void) other;
	std::cout<<"PmergeMe copy assignment operator called!\n";
	return *this;
}

template <typename T>
PmergeMe<T>::~PmergeMe()
{
	std::cout<<"PmergeMe dtor called!\n";
}

template <typename T>
void PmergeMe<T>::fill(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		std::stringstream ss(argv[i]);
		long long ii;
		if (ss.str().size() > 10 || ss.str().find_first_not_of("0123456789") != std::string::npos)
			throw std::runtime_error("Invalid iput");
		ss >> ii;
		if (ii > 2147483647)
			throw std::runtime_error("Number is bigger than INT_MAX");
		arr.push_back(ii);
	}
}

template <typename T>
void PmergeMe<T>::print()
{

	for (size_t i = 0; i < arr.size(); i++)
		std::cout<<" "<<arr[i];
	std::cout<<std::endl;
}




template <typename T>
T binary_search(T big, T small)
{
    while (!small.empty())
    {
        typename T::iterator middle;
		typename T::iterator left = big.begin();
        typename T::iterator right = big.end() - 1;
		while (left < right)
        {
			middle = left + std::distance(left, right) / 2;
            if (small[0] <= *middle)
                right = middle;
			else
                left = middle + 1;
        }
		big.insert(left, small[0]);
        small.erase(small.begin());
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
			std::cout<<"_________________________\n";
		for (size_t i = 0; i < big.size(); i++)
			std::cout<<" "<<big[i];
		std::cout<<std::endl;
		std::cout<<"_________________________\n";
		// std::cout<<big.size()<<std::endl;
	return binary_search(rec(big), small);
}

template <typename T>
void PmergeMe<T>::sort()
{
	arr = rec(arr);
	
}

