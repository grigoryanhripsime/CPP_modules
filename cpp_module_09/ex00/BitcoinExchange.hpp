#pragma once

#include <map>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

class BitcoinExchange
{
    private:
        std::ifstream data_file;
        std::map<std::string, double> data;
        std::map<std::string, double> input;
    public:
        bool valid_date(std::string date);
        void processingData();
        void exchange(std::ifstream &input);

        //Orthodox
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other);
        ~BitcoinExchange();
};

