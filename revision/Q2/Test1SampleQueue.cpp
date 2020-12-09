// Test1SampleQueue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include "Queue.cpp"
#include "Customer.cpp"

using namespace std;

void registerCustomer(Queue& serviceQueue, int& queueNumber)
{
	//Prompt for name
	string name ;

    cout << "Please enter your name: \n"; 
    getline(cin, name); 

	//Create a customer object
	Customer c = Customer(queueNumber, name);
	
	//Add into the service queue
	serviceQueue.enqueue(c);

	queueNumber++;

}

void nextCustomer(Queue& serviceQueue)
{
	//Reference to this customer object
	Customer c;

	//Remove the item
	serviceQueue.dequeue(c);

	cout << "The queue number: " << c.getQueueNumber() << endl;

}

void displayCount(Queue& serviceQueue)
{

	int count;
	
	Queue q;
	while(!serviceQueue.isEmpty()){
		Customer c;
		serviceQueue.dequeue(c);
		q.enqueue(c);
		count++;
	}


	serviceQueue = q;


	cout << "Total count: " << count << endl;


}

int main()
{
	Queue serviceQueue;
	int queueNumber = 0;

	registerCustomer(serviceQueue, queueNumber);
	registerCustomer(serviceQueue, queueNumber);
	registerCustomer(serviceQueue, queueNumber);
	registerCustomer(serviceQueue, queueNumber);
	
	nextCustomer(serviceQueue);
	

	displayCount(serviceQueue);



}

