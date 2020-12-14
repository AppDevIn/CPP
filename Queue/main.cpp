#include<iostream>
#include "queue.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Queue q;

    q.enqueue('a');
    q.enqueue('b');
    q.enqueue('c');
    q.enqueue('d');
    q.enqueue('e');
    q.enqueue('f');

    q.displayItems();

    q.push_front('z');

    q.displayItems();

    return 0;
}




