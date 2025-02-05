#include <BitcoinExchange.hpp>

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
    std::string line;
    if (input.eof() || !std::getline(input, line) || line.compare("date | value"))
        throw std::runtime_error("Invid file");
    while (std::getline(input, line))
    {
		if (line.size() < 14 || !(line[10] == ' ' && line[11] == '|' && line[12] == ' ' && line[13] != ' '))
		{
            std::cout<<"Error: bad input => "<<line<<std::endl;
			continue ;
		}
        std::cout<<line<<std::endl;
        if (!valid_date(line.substr(0, 10)))
        {
            std::cout<<"Error: invalid date format => "<<line.substr(0, line.find('|'))<<std::endl;
            continue ;
        }
    }
}

bool BitcoinExchange::valid_date(std::string date)
{
    if (date.size() != 10)
        return false;
		
    int year, month, day;
    char dash1, dash2;
    std::stringstream ss(date);
    ss >> year >> dash1 >> month >> dash2 >> day;
    if (ss.fail() || dash1 != '-' || dash2 != '-')
		return false;

	if (year < 2009 || year > 2022 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	switch (month)
	{
		case 2:
			return day <= (year % 4 == 0 ? 29 : 28);
		case 4:
		case 6:
		case 9:
		case 11:
			return day <= 30;
	}
	return true;
}
