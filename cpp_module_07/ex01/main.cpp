#include "iter.hpp"

void ft_abs(int &num)
{
	if (num < 0)
		num *= -1;
}

void f(const std::string &str)
{
	std::cout<<str.size()<<std::endl;
}

int main()
{
	{	
		int arr[] = {-1, 2, -3, 6, 7};
		std::cout<<"arr before iter\n";
		for (int i = 0; i < 5; i++)
			std::cout<<arr[i]<<" ";
		iter(arr, 5, &ft_abs);
		std::cout<<std::endl<<"arr before iter\n";;
		for (int i = 0; i < 5; i++)
			std::cout<<arr[i]<<" ";
		std::cout<<std::endl;
	}

	{
		const std::string arr[] = {"hello", "bye"};
		iter(arr, 2, &f);
	}

}

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print( T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter( tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }