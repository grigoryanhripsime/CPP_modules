#include "Point.hpp"

int main( void )
{
	Point a(0, 0);
	Point b(0, 5);
	Point c(5, 0);
	Point p(2, 0.6);
	// std::cout<<"Params were gotten\n";
	std::cout<<bsp(a, b, c, p)<<std::endl;
	return 0;
}


