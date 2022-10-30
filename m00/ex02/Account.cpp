

#include "Account.hpp"

#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Returns total number of accounts
int Account::getNbAccounts(void) { return (_nbAccounts); }

// Returns total amount
int Account::getTotalAmount(void) { return (_totalAmount); }

// Returns total number of deposits
int Account::getNbDeposits(void) { return (_totalNbDeposits); }

// Returns total number of withdrawls
int Account::getNbWithdrawals(void) { return (_totalNbWithdrawals); }

// Displays total account information
void Account::displayAccountsInfos(void) {
  _displayTimestamp();
  std::cout << " accounts:" << _nbAccounts;
  std::cout << ";total:" << _totalAmount;
  std::cout << ";deposits:" << _totalNbDeposits;
  std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
  return;
}

// Default constructor
Account::Account(int initial_deposit) {
  _nbAccounts++;
  _totalAmount += initial_deposit;
  _accountIndex = _nbAccounts - 1;
  _amount = initial_deposit;
  _nbDeposits = 0;
  _nbWithdrawals = 0;

  _displayTimestamp();
  std::cout << " index:" << _accountIndex;
  std::cout << ";amount:" << _amount;
  std::cout << ";created" << std::endl;
  return;
}

// Default destructor
Account::~Account(void) {
  _displayTimestamp();
  std::cout << " index:" << _accountIndex;
  std::cout << ";amount:" << _amount;
  std::cout << ";closed" << std::endl;
  return;
}

// Increments private members with deposit amount
void Account::makeDeposit(int deposit) {
  _displayTimestamp();
  std::cout << " index:" << _accountIndex;
  std::cout << ";p_amount:" << _amount;
  std::cout << ";deposit:" << deposit;

  _totalAmount += deposit;
  _totalNbDeposits += 1;
  _amount += deposit;
  _nbDeposits += 1;

  std::cout << ";amount:" << _amount;
  std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
  return;
}

// Decrements private members with withdrawl amount if possible
bool Account::makeWithdrawal(int withdrawl) {
  _displayTimestamp();
  std::cout << " index:" << _accountIndex;
  std::cout << ";p_amount:" << _amount;
  std::cout << ";withdrawal:";
  if (withdrawl > _amount) {
    std::cout << "refused" << std::endl;
    return false;
  } else {
    std::cout << withdrawl;

    _totalAmount -= withdrawl;
    _totalNbWithdrawals += 1;
    _amount -= withdrawl;
    _nbWithdrawals += 1;

    std::cout << ";amount:" << _amount;
    std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
  }
}

// Returns account balance
int Account::checkAmount(void) const { return (_amount); }

// TODO
void Account::displayStatus(void) const {
  _displayTimestamp();
  std::cout << " index:" << _accountIndex;
  std::cout << ";amount:" << _amount;
  std::cout << ";deposits:" << _nbDeposits;
  std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
  return;
}

// TODO
void Account::_displayTimestamp(void) {
  std::cout << "[19920104_091532]";
  return;
}
