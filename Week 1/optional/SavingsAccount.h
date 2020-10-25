#include "Account.h"
class SavingsAccount : public Account{
    //data member
    private:
        double interest; // Percentage 

    public:
        SavingsAccount(double balance, double aInterest);
        double calculateInterest();

};