#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	this->_displayTimestamp();
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout<<"index:"<<this->_accountIndex<<";amount:"<<this->_amount<<";created"<<std::endl;
}

Account::~Account( void )
{
	this->_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";amount:"<<this->_amount<<";closed"<<std::endl;
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}
int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}
int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout<<"accounts:"<<_nbAccounts<<";total:"<<_totalAmount<<";deposits:"<<_totalNbDeposits<<";withdrawals:"<<_totalNbWithdrawals<<std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t t = std::time(nullptr);
	std::tm* now = std::localtime(&t);
	std::cout<<"["<<now->tm_year + 1900;
	if (now->tm_mon + 1 < 10)
		std::cout<<"0";
	std::cout<<now->tm_mon + 1;
	if (now->tm_mday < 10)
		std::cout<<"0";
	std::cout<<now->tm_mday<<"_";
	if (now->tm_hour < 10)
		std::cout<<"0";
	std::cout<<now->tm_hour;
	if (now->tm_min < 10)
		std::cout<<"0";
	std::cout<<now->tm_min;
	if (now->tm_sec < 10)
		std::cout<<"0";
	std::cout<<now->tm_sec<<"] ";
}

void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";p_amount:"<<this->_amount - deposit<<";deposit:"<<deposit<<";amount:"<<this->_amount<<";nb_deposits:"<<this->_nbDeposits<<std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (this->_amount - withdrawal < 0)
	{
		std::cout<<"index:"<<this->_accountIndex<<";p_amount:"<<this->_amount<<";withdrawal:refused"<<std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout<<"index:"<<this->_accountIndex<<";p_amount:"<<this->_amount + withdrawal<<";withdrawal:"<<withdrawal<<";amount:"<<this->_amount<<";nb_withdrawals:"<<this->_nbWithdrawals<<std::endl;
	return true;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";amount:"<<this->_amount<<";deposits:"<<this->_nbDeposits<<";withdrawals:"<<this->_nbWithdrawals<<std::endl;
}

int		Account::checkAmocunt( void ) const
{
	return 1;
}

