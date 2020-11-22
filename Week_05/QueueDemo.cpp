#include <iostream>
#include <string>
#include "queue.cpp" 

using namespace std;

int main(int argc, char const *argv[])
{
    Queue q;
    char c;

    q.enqueue('a');
    q.enqueue('b');

    q.getFront(c);
    cout << "Display the front value: " << c << endl;

    cout << "Display all items: " << endl;
    q.displayItems();

    q.dequeue();

    cout << "Display all items" << endl;;
    q.displayItems();


    return 0;
}


