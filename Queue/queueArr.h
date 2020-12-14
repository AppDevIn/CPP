#pragma once
#include<string>
#include<iostream>
using namespace std;
const int MAX_SIZE = 10; //8 Slots, one is wasted (without use of counter)

typedef int ItemType;

class CircularArrayQueue
{
private:
	ItemType items[MAX_SIZE];
	int  front;
	int  back;
	bool isFull;
    int count;
	//int counter;
public:
	// constructor
	CircularArrayQueue();
	// enqueue (add) item at back of the queue
	bool enqueue(ItemType item);
	// dequeue (remove) item from front of the queue
	bool dequeue();
	// retrieve (get) and dequeue item from front of the queue
	bool dequeue(ItemType& item);
	// retrieve (get) item from front of queue
	void getFront(ItemType& item);
	// check if the queue is empty
	bool isEmpty();
	// display all items in the queue
	void displayItems();
};

