#include "Harl.hpp"

Harl::Harl()
{
    // std::cout<<"Harl was created!"<<std::endl;
}

Harl::~Harl()
{
    // std::cout<<"Harl was destroyed!"<<std::endl;
}

void Harl::debug(void)
{
    std::cout<<"[ DEBUG ]"<<std::endl;
    std::cout<<"Here is an unacceptable appearance, that you need to correct."<<std::endl;
    std::cout<<"I've been coming for years whereas you started working here since last month."<<std::endl;
}

void Harl::info(void)
{
    std::cout<<"[ INFO ]"<<std::endl;
    std::cout<<"Everything is going as planed."<<std::endl;
}

void Harl::warning(void)
{
    std::cout<<"[ WARNING ]"<<std::endl;
    std::cout<<"I think I deserve to have some extra bacon for free."<<std::endl;
    std::cout<<"I've been coming for years whereas you started working here since last month."<<std::endl;
}

void Harl::error(void)
{
    std::cout<<"[ ERROR ]"<<std::endl;
    std::cout<<"This is unacceptable, I want to speak to the manager now."<<std::endl;
}

void Harl::complain(std::string level)
{
    if (level == "DEBUG")
        this->debug();
    else if (level == "INFO")
        this->info();
    else if (level == "WARNING")
        this->warning();
    else if (level == "INFO")
        this->info();
    else
        std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
}