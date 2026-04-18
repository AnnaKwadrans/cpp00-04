#include "Account.hpp"

Account::Account( int initial_deposit )
{

}

Account::~Account( void )
{
        return ;
}

static int	Account::getNbAccounts( void ) {
        return (_nbAccounts);
}

static int	Account::getTotalAmount( void ) {
        return (_totalAmount);
}

static int	Account::getNbDeposits( void ) {
        return (_nbDeposits);
}

static int	Account::getNbWithdrawals( void ) {
        return (_nbWithdrawals);
}

static void     Account::displayAccountsInfos( void ) {
        
        // code
        
        return ;
}



void    Account::makeDeposit( int deposit )
{

}

bool    Account::makeWithdrawal( int withdrawal )
{

}

int     Account::checkAmount( void ) const
{

}

void    Account::displayStatus( void ) const
{

}

static void     _displayTimestamp( void )
{

}

/*
c++ -Wall -Wextra -Werror -std=c++98 -c tests.cpp -o tests.o
c++ -Wall -Wextra -Werror -std=c++98 -c Account.cpp -o Account.o
c++ -Wall -Wextra -Werror -std=c++98 tests.o Account.o -o account
Undefined symbols for architecture x86_64:
  "Account::makeDeposit(int)", referenced from:
      _main in tests.o
  "Account::makeWithdrawal(int)", referenced from:
      _main in tests.o
  "Account::displayAccountsInfos()", referenced from:
      _main in tests.o
  "Account::Account(int)", referenced from:
      void std::__1::allocator<Account>::construct<Account, int const&>(Account*, int const&) in tests.o
  "Account::~Account()", referenced from:
      std::__1::allocator<Account>::destroy(Account*) in tests.o
  "Account::displayStatus() const", referenced from:
      _main in tests.o
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
make: *** [account] Error 1
*/