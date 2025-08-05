#include "Account.hpp"
#include <string>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account ::Account (int initial_deposit)
{
    _accountIndex=_nbAccounts;
    _amount = initial_deposit ;
    _nbDeposits =0;
    _nbWithdrawals =0;

    _nbAccounts++;
    _totalAmount+=initial_deposit;
}

int Account ::getNbAccounts(){  return _nbAccounts; }
int Account ::getNbDeposits(){  return _totalNbDeposits; }
int Account ::getNbWithdrawals(){   return _totalNbWithdrawals; }
int Account::getTotalAmount(){  return _totalAmount;  }

void Account ::displayAccountsInfos()
{
    int i = 0;
    while (i < getNbAccounts())
    {
        std::cout<< "nb Account "+getNbAccounts();
        std::cout<< "Nb Deposits "+getNbDeposits();
        std::cout<< "Nb Withdrawals "+getNbWithdrawals();
        std::cout<< "Total Amount "+getTotalAmount();
        i++;
    }
    
}

void Account::makeDeposit(int deposit)
{
    int d =getNbDeposits();
    int t = getTotalAmount();
    d++;
    t+=deposit;
}
bool Account ::makeWithdrawal(int withdrawal )
{
    int w = getNbWithdrawals();
    int t = getTotalAmount();
    if(withdrawal <= t)
    {   t-=withdrawal;
        w++;
        return true;
    }
    return false;
}