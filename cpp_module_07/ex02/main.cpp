#include "Array.hpp"

int maina()
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

	try 
	{
		arr[-5] = 10;
	} catch (std::exception &e)
	{
		std::cout<<"Invalid index!\n";
	}
	return 0;
}

// #define MAX_VAL 750
// int maina()
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

int main()
{
	maina();
	system("leaks Array");
}