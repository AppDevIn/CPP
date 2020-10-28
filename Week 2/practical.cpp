#include <iostream>
#include <algorithm>
#include "List.cpp"
#include "Person.cpp"
#include <string>

using namespace std;


void initContact(List<Person>& contacList);
void displayContact(List<Person>& contacList);
void addContact(List<Person>& contacList);
void removeContact(List<Person>& contacList);
void searchContact(List<Person>& contacList);
int menu();




int main()
{   
    int option = 1;

    List<Person> list;
    initContact(list);
    
    while (option != 0)
    {
        option = menu();
            
        switch (option)
        {
        case 1:
            displayContact(list);
            break;
        case 2: 
            addContact(list);
            break;

        case 3:
            displayContact(list);
            removeContact(list);
            break;

        case 4:
            searchContact(list);
            break;
        default:
            break;
        }
    }
    
    

    return 0;
}

int menu(){
    int option;
    cout << "\n---------------- Main Menu -------------------" << endl;
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

void initContact(List<Person>& contacList){
    
    Person person("Jeya", "98775645");
    contacList.add(person);

    Person person2("Run Lin", "65748392");
    contacList.add(person2);

    Person person3("YT", "87871234");
    contacList.add(person3);

    Person person4("Nat", "99991111");
    contacList.add(person4);

    Person person5("Mori", "88779966");
    contacList.add(person5);

}

void displayContact(List<Person>& contacList){
    if(!contacList.isEmpty()){
        cout << "This list is empty" << endl;
    }
    for (int i = 0; i < contacList.getLength(); i++)
    {
        Person person = contacList.get(i);
        cout << i + 1 << ". " << person.to_string() << endl;
    }
}


void addContact(List<Person>& contacList){

    string name, telNo;
    Person person;
    
    cout << "What is your contact name: ";
    cin >> name;

    cout << "What is your contact no: ";
    cin >> telNo;

    person.setTelNo(telNo);

    person.setName(name);

    contacList.add(person);

}


void removeContact(List<Person>& contacList){

    int position;

    cout << "\nWhich position which you like to remove: ";
    cin >> position;

    if((position-1) >= 0 && position <= contacList.getLength()) {
        contacList.remove(position - 1);
    } else{
        cout << "Invaild position" << endl;        
    }
}

void searchContact(List<Person>& contacList){

    string name;

    cout << "Please enter the name: ";
    cin.ignore();
    getline(cin, name);


    transform(name.begin(), name.end(), name.begin(), ::tolower);

    for (int i = 0; i < contacList.getLength(); i++)
    {
        Person person = contacList.get(i);
        if (person.getName() ==  name)
        {
            cout << person.to_string() << endl;
        }
    }
}


