#include "iter.hpp"

void ft_abs(int &num)
{
	if (num < 0)
		num *= -1;
}

int main()
{
	int arr[] = {-1, 2, -3, 6, 7};
	iter(arr, 5, &ft_abs);
	for (int i = 0; i < 5; i++)
		std::cout<<arr[i]<<" ";
	std::cout<<std::endl;
}