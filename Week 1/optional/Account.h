class Account{
    //data memeber
    private:
        double amount;
    //Methods
    public:
        //Constructor
        Account(double aAmount); // Parameterized Constructor 

        //Member functions 
        void credit();
        void debit(double withdraw);
        double getBalance();


};