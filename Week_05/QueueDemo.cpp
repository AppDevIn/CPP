#include <iostream>
#include <string>
#include "queue.cpp" 
#include "stack.cpp" 

using namespace std;

int main(int argc, char const *argv[])
{

    //Question 5
    Queue q;
    Stack s;

    char c;

    string input;
    char queue;
    char stack;

    q.enqueue('a');
    q.enqueue('b');

    q.getFront(c);
    cout << "Display the front value: " << c << endl;

    cout << "Display all items: " << endl;
    q.displayItems();

    q.dequeue();

    cout << "Display all items" << endl;;
;    q.displayItems();


    //Question 6 

    s.~Stack();
    q.~Queue();

    cout << "Please enter a word: " << endl;
    cin >> input;

    for(char ch : input)
    {
        
        s.push(ch);
        q.enqueue(ch);
        
    }

    bool isTheSamechar = true;
    
    while(!q.isEmpty() && isTheSamechar){

         

        s.getTop(stack);
        q.getFront(queue);


        if(queue == stack){
            
            s.pop();
            q.dequeue();
            
            
        } else
            isTheSamechar = false; 
        
            


    } 

    if(isTheSamechar)
        cout << "Is a Palindrome" << endl;
    else
        cout << "Is not Palindrome" << endl;

    return 0;
}


