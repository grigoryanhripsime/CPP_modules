#include "Array.hpp"

int main()
{
    unsigned int n = 10;
    Array<int> arr(n);
    for (unsigned int i = 0; i < arr.size(); i++)
        arr[i] = i * 10;
    
    std::cout<<"size = "<<arr.size()<<std::endl;
    for (unsigned int i = 0; i < arr.size(); i++)
        std::cout<<arr[i]<<" ";
    std::cout<<std::endl;

    Array<int> arr2 = arr;
    arr2[3] *= -1;
    for (unsigned int i = 0; i < arr.size(); i++)
        std::cout<<arr[i]<<" ";
    std::cout<<std::endl;
    for (unsigned int i = 0; i < arr2.size(); i++)
        std::cout<<arr2[i]<<" ";
    std::cout<<std::endl;
}