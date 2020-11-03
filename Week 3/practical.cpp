#include <iostream>
#include "List.cpp"

int main(int argc, char const *argv[])
{

    //Create an empty list, nameList.
    List nameList;

    //Add the name,  Annie,  to the list
    nameList.add("Annie");

    //Add the name,  Jacky,  to the list
    nameList.add("Jacky");

    //Add the name,  Wendy,  to the list
    nameList.add("Wendy");

    // Display all the names in the list
    cout << endl;
    nameList.print();

    // Add the name,  Brenda,  to the second position in the list
    nameList.add(1,"Brenda");

    // Display the all the names in the list
    cout << endl;
    nameList.print();

    // Remove the name in the third position of the list
    nameList.remove(2);

    // Display the all the names in the list
    cout << endl;
    nameList.print();

    // Remove the name in the first position of the list
    nameList.remove(0);

    // Display all the names in the list
    cout << endl;
    nameList.print();




    return 0;
}
