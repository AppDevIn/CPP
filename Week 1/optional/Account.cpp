#include "Account.h"
#include <iostream>

using namespace std;

Account::Account(double aAmount){ 

    if(aAmount >= 0){
        aAmount = amount;
    }else
    {
        amount = 0;
        cout << "The initial amount is below $0" << endl;
    }
    
}

void Account::credit(){

}

void Account::debit(double withdraw){
    
    if (withdraw > amount){
        cout << "Debit amount exceeded account balance" << endl;
    }else{
        amount -= withdraw;
    }
}

double Account::getBalance(){ return amount; }
