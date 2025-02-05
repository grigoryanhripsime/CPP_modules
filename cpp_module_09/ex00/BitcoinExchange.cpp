#include <BitcoinExchange.hpp>
#include <iomanip>

BitcoinExchange::BitcoinExchange() : data_file("data.csv")
{
    this->processingData();
    std::cout<<"BitcoinExchange default ctor called!\n";
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    this->data = other.data;
    this->input = other.input;
    std::cout<<"BitcoinExchange copy ctor called!\n";
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this == &other)
        return *this;
    this->data = other.data;
    this->input = other.input;
    std::cout<<"BitcoinExchange copy assignment operator called!\n";
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
    this->data_file.close();
    std::cout<<"BitcoinExchange dtor called!\n";
}

void BitcoinExchange::processingData()
{    
    std::string line;
    std::getline(data_file, line);
    while (std::getline(data_file, line))
    {
        double num;
        std::stringstream ss(line.substr(line.find(',') + 1));
        ss >> num;
        // std::cout<<line.substr(0, line.find(','))<<" "<<std::fixed << std::setprecision(6) <<num<<std::endl;
        this->data.insert(std::make_pair(line.substr(0, line.find(',')), num));
    }
}

void BitcoinExchange::exchange(std::ifstream &input)
{
    // input validation
    // read line by line and print needed vlaue
    
}

