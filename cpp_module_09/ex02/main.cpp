#include <PmergeMe.hpp>

int main(int argc, char *argv[])
{
	clock_t start, end;
    double deque_time, vector_time;

    start = clock(); // Start the timer
	if (argc < 2)
	{
		std::cerr<<"Invalid number of arguments!\n";
		return 1;
	}

	try
	{
		PmergeMe<std::deque<int> > sorter_deque;
		sorter_deque.fill(argc, argv);
		std::cout<<"Before: ";
		sorter_deque.print();
		start = clock();
		sorter_deque.sort();
		end = clock();
		deque_time = static_cast<double>(end - start)  / CLOCKS_PER_SEC;
		std::cout<<"After: ";
		sorter_deque.print();
		PmergeMe<std::vector<int> > sorter_vector;
		sorter_vector.fill(argc, argv);
		end = start = clock();
		sorter_vector.sort();
		end = clock();
		vector_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
		std::cout<<"Time to process a range of 5 elements with std::deque : "<<deque_time<<" us\n";
		std::cout<<"Time to process a range of 5 elements with std::vector : "<<vector_time<<" us\n";
	}catch(std::exception &e)
	{
		std::cerr<<e.what()<<std::endl;
	}
}