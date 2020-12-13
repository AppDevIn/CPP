#include <iostream>

using namespace std;

typedef char ItemType;

class List

{

private:
    struct Node

    {

        ItemType item; // item

        Node *next; // pointer pointing to next node
    };

    int size;

    Node *front; // pointer pointing to front node

    int rCount(Node *curr, ItemType item);
    Node *rReverse(Node *curr);
    Node* getNode();

public:
    //constructor

    List();

    // add a new item at a specified position in the list

    // 0 <= index < size

    bool add(int index, ItemType item);

    // remove an item at a specified position in the list

    // 0 <= index < size

    void remove(int index);

    // get an item at a specified position in the list

    // 0 <= index < size

    ItemType get(int index);

    // returns the number of occurrences of item in the list

    int count(ItemType item);

    // recursive function that

    // returns the number of occurrences of item in the list

    int countR(ItemType item);

    // reverses the list

    void reverse();

    // recursive function that reverses the list

    void reverseR();

    // prints all the items in the list

    void display();

    int getLength();

    void removeDuplicatesfromUnsorted();
    
    void removeDuplicatesfromSorted();

    void deleteAllOccurrences(ItemType item);

    void mergeLLAt(List newList, int pos);

    void reverseAt(int start, int end);

};
