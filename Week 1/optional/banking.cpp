#include <iostream>
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"


using namespace std;


int main()
{
    vector<Account*> account;

    account.push_back(new SavingsAccount(3000, 1));
    account.push_back(new CheckingAccount(3000, 5));

    




    return 0;
}
