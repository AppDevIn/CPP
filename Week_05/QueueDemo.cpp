#include <iostream>
#include <string>
#include "queue.cpp" 

using namespace std;

int main(int argc, char const *argv[])
{
    Queue q;

    q.enqueue('a');
    q.enqueue('b');

    char c;
    q.getFront(c);
    cout << c << endl;

    q.dequeue();
    cout << c << " DELETED" << endl;


    q.getFront(c);
    cout << c << endl;

    return 0;
}


