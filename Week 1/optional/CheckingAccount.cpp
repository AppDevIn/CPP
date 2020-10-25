#include "CheckingAccount.h"
#include <iostream>

using namespace std;

CheckingAccount::CheckingAccount(double balance, double aFee):Account(balance){

    fee = aFee;

}

void CheckingAccount::credit(double value){
    Account::credit(value);
    amount -= fee;
}

void CheckingAccount::debit(double withdraw){
    
    Account::debit(withdraw);

    if (withdraw <= amount){
        amount -= fee;
    }

}