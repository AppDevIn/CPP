#include<iostream> 
#include "List.cpp"
using namespace std; 


int main(int argc, char const *argv[])
{
    List list;

    list.add(0,'a');
    list.add(0,'a');
    list.add(0,'a');
    list.add(1,'b');
    list.add(2,'c');
    list.add(3,'d');
    list.add(4,'e');
    list.add(5,'f');
    list.add(6,'g');
    list.add(7,'h');
    list.add(8,'i');

    cout << list.count('a') << endl;

    return 0;
}

