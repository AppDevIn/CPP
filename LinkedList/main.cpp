#include<iostream> 
#include "List.cpp"
using namespace std; 


int main(int argc, char const *argv[])
{
    List list;

    list.add(0,'a');
    list.add(1,'a');
    list.add(2,'a');
    list.add(3,'b');
    list.add(4,'c');
    list.add(5,'d');
    list.add(6,'e');
    list.add(7,'f');
    list.add(8,'g');
    list.add(9,'h');
    list.add(10,'i');
    list.add(11,'a');


    cout << list.count('a') << endl;

    list.display();
    list.reverse();
    list.display();

    cout << list.countR('z') << endl;



    return 0;
}

