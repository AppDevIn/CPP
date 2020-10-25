#include "Account.h"

class CheckingAccount : public Account{
    private:
        double fee;

    public:
        CheckingAccount(double balance, double aFee);
        void credit(double value);
        void debit(double withdraw);

};