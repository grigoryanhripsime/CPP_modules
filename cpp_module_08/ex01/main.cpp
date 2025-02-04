#include <Span.hpp>

#include <cstdlib> 
#include <ctime> 

int main()
{
    Span span(100);
    const Span span2(10);
	span2.fill();
	span.fill();
	try
	{
		span.addNumber(-2147483648);
		span.addNumber(2147483647);
	} catch (const std::exception &e)
	{
		std::cout<<e.what()<<std::endl;
	}
    span.print();
    std::cout<<span.longestSpan()<<std::endl;
    std::cout<<span.shortestSpan()<<std::endl;
	
	span = span2;
    span.print();
    std::cout<<span.longestSpan()<<std::endl;
    std::cout<<span.shortestSpan()<<std::endl;

	Span span3(20);

	// int		arr[] = {12, 52, 521, 124, -23, 1};
	// span3.addNumber_range(arr, arr + 5);

	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i * 10);
	span3.addNumber_range(vec.begin(), vec.end());
	span3.print();
}