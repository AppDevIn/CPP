#include <iostream>
#include <algorithm>
#include "List.h"
#include "List.cpp"
#include "Person.cpp"
#include <string>

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
    List<Person> list;
    
    while (option != 0)
    {
        option = menu();
        string name, telNo;
        Person person;
        int position;
            
        switch (option)
        {
        case 1:
            if(list.getLength()){
                cout << "This list is empty" << endl;
            }
            for (int i = 0; i < list.getLength(); i++)
            {
                Person person = list.get(i);
                cout << "The number of " << person.getName() << " is " << person.getTelNo() << endl;
            }
            break;
        case 2: 
            cout << "What is your contact name: ";
            cin >> name;

            cout << "What is your contact no: ";
            cin >> telNo;

            person.setTelNo(telNo);

            transform(name.begin(), name.end(), name.begin(), ::tolower);
            person.setName(name);

            list.add(person);
            break;

        case 3:
            cout << "Which position which you like to remove: ";
            cin >> position;

            list.remove(position);
            break;

        case 4:
            cout << "Please enter the name: ";
            cin >> name;


            transform(name.begin(), name.end(), name.begin(), ::tolower);

            for (int i = 0; i < list.getLength(); i++)
            {
                Person person = list.get(i);
                if (person.getName() ==  name)
                {
                    cout << "The number of " << person.getName() << " is " << person.getTelNo() << endl;
                }
            }
            break;
        default:
            break;
        }
    }
    
    

    return 0;
}


