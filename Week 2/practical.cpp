#include <iostream>
#include "List.cpp"

using namespace std;


int menu(){
    int option;
    cout << "---------------- Main Menu -------------------" << endl;
    cout << "[1] List the phone numbers" << endl;
    cout <<"[2] Add a new contact" << endl;
    cout << "[3] Remove a contact"  << endl;
    cout << "[4] Search for a phone number" << endl;
    cout << "[0] Exit"  << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Enter your option : " ;
    cin >> option;
    cout << endl;

    return option;

}


int main()
{   
    int option = 1;
    List list = List();
    while (option != 0)
    {
        option = menu();
        switch (option)
        {
        case 1:
            list.print();
            break;
        
        default:
            break;
        }
    }
    
    

    return 0;
}


