#include <BitcoinExchange.hpp>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr<<"Error: could not open file.\n";
        return 1;
    }
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