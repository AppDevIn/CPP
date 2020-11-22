// Stack.h � Specification of Stack (Pointer-based implementation)
#pragma once
#include <iostream>
using namespace std;

typedef string ItemType;



class Stack
{
private:
	struct Node
	{
		ItemType item;   // to store data
		Node*     next;  // to point to next node
	};

	Node *topNode;
	void reverse(Node* head);

public:
	Stack();		// constructor
	~Stack();		// destructor
	bool push(ItemType item);
	bool pop();
	bool pop(ItemType &item);
	void getTop(ItemType &item);
	bool isEmpty();	
};


