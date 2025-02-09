#include <BitcoinExchange.hpp>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr<<"Error: invalid number of arguments.\n";
        return 1;
    }
	try 
	{
		std::ifstream input(argv[1]);
		if (!input.is_open())
		{
			std::cerr<<"Error: could not open file.\n";
			return 1;
		}
		BitcoinExchange exchanger;
		exchanger.exchange(input);
		input.close();
	}
    catch(std::exception &e)
	{
		std::cerr<<e.what()<<std::endl;
	}
}