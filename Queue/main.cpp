#include<iostream>
#include "queue.cpp"
#include "queueArr.cpp"


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
//     q.displayItems();

//     q.dequeueByRange(0,4);

//     q.displayItems();

//     cout << item << endl;

//     return 0;
// }

/**
 * For CircularArrayQueue
*/

int main() 
{ 
    CircularArrayQueue q; 
  
    // Inserting elements in Circular Queue 
    q.enqueue(14); 
    q.enqueue(22); 
    q.enqueue(13); 
    q.enqueue(-6); 
    q.enqueue(14); 
    q.enqueue(22); 
    q.enqueue(13); 
    q.enqueue(-6); 
    q.enqueue(14); 
    q.enqueue(22); 
    q.enqueue(13); 
    q.enqueue(-6); 
    q.enqueue(14); 
    q.enqueue(22); 
    q.enqueue(13); 
    q.enqueue(-6); 
  
    // Display elements present in Circular Queue 
    q.displayItems(); 
  
    // // Deleting elements from Circular Queue 
    // printf("\nDeleted value = %d", q.deQueue()); 
    // printf("\nDeleted value = %d", q.deQueue()); 
  
    // q.displayQueue(); 
  
    // q.enQueue(9); 
    // q.enQueue(20); 
    // q.enQueue(5); 
  
    // q.displayQueue(); 
  
    // q.enQueue(20); 
    // return 0; 
} 