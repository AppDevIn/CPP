class Account{
    //data memeber
    protected:
        double amount;
    //Methods
    public:
        //Constructor
        Account(double aAmount); // Parameterized Constructor 

        //Member functions 
        void credit(double value);
        void debit(double withdraw);
        double getBalance();


};