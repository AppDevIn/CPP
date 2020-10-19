#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int input, digit;
    int counter = 10000;
    cout << "Enter 5 digit?";
    //cin.ignore(numeric_limits<streamsize>::max(), '\n') >> input;
    cin >> input;

    cout << "\n";
    for (size_t i = 0; i < 5; i++){

        int digit = floor((input / counter));
        cout << digit << "   ";    
        input -= (counter * digit);
        counter /= 10;
        


    }

    

    

   
    

    return 5;
}
