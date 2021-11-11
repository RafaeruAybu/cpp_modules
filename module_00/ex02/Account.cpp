#include "Account.hpp"
#include <iostream>
#include <string>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts() { return _nbAccounts; }

int Account::getTotalAmount() { return _totalAmount; }

int Account::getNbDeposits() { return _totalNbDeposits; }

int Account::getNbWithdrawals() { return _totalNbWithdrawals; }

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " " << "accounts:" << getNbAccounts()
		<< ";" << "total:" << getTotalAmount() << ";" << "deposits:"
		<< getNbDeposits() << ";" << "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";" << "amount:" << checkAmount()
		<< ";" << "created" << std::endl;
}

Account::Account( void )
{
	_accountIndex = _nbAccounts;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_nbAccounts++;
	_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";" << "amount:" << checkAmount()
			  << ";" << "created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";" << "amount:" << checkAmount()
			  << ";" << "closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	int p_amount = checkAmount();
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";"
		<< "p_amount:" << p_amount << ";" << "deposit:" << deposit << ";"
		<< "amount:" << _amount << ";" << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	int p_amount = checkAmount();
	//if withdrawal is possible
	if (p_amount - withdrawal >= 0)
	{
		//do withdrawal
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		_displayTimestamp();
		std::cout << " " << "index:" << _accountIndex << ";"
			<< "p_amount:" << p_amount << ";" << "withdrawal:" << _nbWithdrawals << ";"
			<< "amount:" << checkAmount() << ";" << "nb_withdrawals:" << _nbWithdrawals
			<< std::endl;
	}
	else
	{
		//refuse withdrawal
		_displayTimestamp();
		std::cout << " " << "index:" << _accountIndex << ";"
			<< "p_amount:" << p_amount << ";" << "withdrawal:refused" << std::endl;
		return (1);
	}
	return (0);
}

int Account::checkAmount() const { return (_amount); }

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";"
		<< "amount:" << checkAmount() << ";" << "deposits:" << _nbDeposits
		<< ";" << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
	std::cout << "[19920104_091533]";
}
