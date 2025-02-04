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
}