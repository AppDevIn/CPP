#include<string> 
#include<iostream> 
using namespace std; 

 

const int MAX_SIZE = 8192; 

typedef string KeyType; 

typedef int ItemType; 

 

class Dictionary 

{ 

private: 

struct Node 

{ 

KeyType  key;        // search key 

ItemType item;// data item 

Node     *next;// pointer pointing to next item 

}; 

 

Node *items[MAX_SIZE]; 

int  size;// number of items in the Dictionary 

 

public: 

// constructor 

Dictionary(); 

 

// destructor 

~Dictionary(); 

 

int hash(KeyType key); 

 

// add a new data item with the specified key to the Dictionary 

bool add(KeyType newKey, ItemType newItem); 

 

// remove a data item with the specified key in the Dictionary 

void remove(KeyType key); 

 

// get a data item with the specified key in the Dictionary (retrieve) 

       // returns -1 if not found 

ItemType get(KeyType key); 

 

// check if the Dictionary is empty 

bool isEmpty(); 

void print();
 

// check the size of the Dictionary 

int getLength(); 

bool replace(KeyType key, ItemType newItem);

 

}; 