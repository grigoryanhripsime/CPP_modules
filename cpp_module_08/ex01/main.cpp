#include <Span.hpp>

#include <cstdlib> 
#include <ctime> 

int main()
{
     std::srand(std::time(0));
    Span span(10000);
    for (int i = 0; i < 10000; i++)
        span.addNumber(std::rand());

    span.print();
    std::cout<<span.longestSpan()<<std::endl;
    std::cout<<span.shortestSpan()<<std::endl;
}