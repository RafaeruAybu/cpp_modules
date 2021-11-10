#include "Account.hpp"
#icnlude <string>

Account::_nbAccounts = 0;
Account::_totalAmount = 0;
Account::_totalNbDeposits = 0;
Account::_totalNbWithdrawals = 0;

static int Account::getNbAccounts() { return _nbAccounts; }

static int Account::getTotalAmount() { return _totalAmount; }

static int Account::getNbDeposits() { return _totalNbDeposits; }

static int Account::getNbWithdrawals() { return _totalNbWithdrawals; }

static void Account::displayAccountsInfos()
{
    std::cout << _displayTimestamp() << " " << "accounts:" << getNbAccounts()
        << ";" << "total:" << getTotalAmount() << ";" << "deposits:"
        << getNbDeposits() << ";" << "withdrawals:" << getNbWithdrawals();
}

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _nbAccounts++;
    _totalAmount += initial_deposit;
}

Account::Account( void )
{
    _accountIndex = _nbAccounts;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _nbAccounts++;
}

Account::~Account() {}

void Account::makeDeposit(int deposit)
{
    int p_amount = _amount;
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    std::cout << _displayTimestamp() << " " << "index:" << _accountIndex << ";"
        << "p_amount:" << p_amount << ";" << "deposit:" << deposit << ";"
        << "amount:" << _amount << ";" << "nb_deposits:" << _nbDeposits;
}