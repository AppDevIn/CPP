#include<iostream>
#include "queue.cpp"

using namespace std;
/**
 * For push_front;
 * */
// int main(int argc, char const *argv[])
// {
//     Queue q;

//     q.enqueue('a');
//     q.enqueue('b');
//     q.enqueue('c');
//     q.enqueue('d');
//     q.enqueue('e');
//     q.enqueue('f');

//     q.displayItems();

//     q.push_front('z');

//     q.displayItems();

//     return 0;
// }

/**
 * 
 * For pop_back()
 * 
*/
// int main(int argc, char const *argv[])
// {
//     Queue q;

//     q.enqueue('a');
//     q.enqueue('b');
//     q.enqueue('c');
//     q.enqueue('d');
//     q.enqueue('e');
//     q.enqueue('f');


    
//     char item;
    
//     q.pop_back(item);

//     cout << item << endl;

//     return 0;
// }


/**
 * dequeueByRange(int start, int end)
*/
int main(int argc, char const *argv[])
{
    Queue q;

    q.enqueue('a');
    q.enqueue('b');
    q.enqueue('c');
    q.enqueue('d');
    q.enqueue('e');
    q.enqueue('f');

    
    char item;
    q.displayItems();

    q.dequeueByRange(0,4);

    q.displayItems();

    cout << item << endl;

    return 0;
}