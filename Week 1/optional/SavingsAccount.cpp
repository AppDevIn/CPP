#include "SavingsAccount.h"


SavingsAccount::SavingsAccount(double balance, double aInterest):Account(balance){
    interest = aInterest;
}

double SavingsAccount::calculateInterest(){
    return interest * amount;
}