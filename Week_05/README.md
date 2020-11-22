# Queue

# Pointer based Implmentation

## Queue ADT

The **F**irst **I**n **F**irst **O**ut (FIFO). The first item in the queue is the first item out 

### Example

![Queue%20669bfd96682746deabd0dd1d97319447/Untitled.png](Queue%20669bfd96682746deabd0dd1d97319447/Untitled.png)

The first one to enter the car wash is the first one out

### ADT

- Queue is a collection of item
- The operation can only occur at the queue's two ends
    - Item can only be **removed** from the front of the queue
    - Item can only be **added** to the back of the queue

## Implementing Queue

### List the operations

- Create an empty queue
- Destroying the empty queue
- Add an item to the back of queue → enqueue
- Remove the item from the front of queue → dequeue
- Retrieve/look at item at the front of the stack → getFront
- Check whether the queue is empty

### Specify the queue ADT

- **Queue()**
- **~Queue()**
- **enqueue(ItemType& item):boolean**
    - parameter
        - item → The item than needs to be added at the back of the queue
    - return
        - A boolean if it was added to the queue
- **dequeue():boolean**
    - return
        - A boolean if the item was removed
- **dequeue(ItemType& item):boolean**
    - parameter
        - Item → The use this as a reference to return the item
    - return
        - A boolean if the item was removed
- **getFront(ItemType& item):void**
    - parameter
        - Item → The use this as a reference to return the item
- **isEmpty():boolean**
    - return
        - True if empty and false if is not

### Pointor based Implementation

Node struncture 

```cpp
struct Node{
	ItemType& item;
	Node     *next
}
```

![Queue%20669bfd96682746deabd0dd1d97319447/Screenshot_2020-11-21_at_10.28.43_AM.png](Queue%20669bfd96682746deabd0dd1d97319447/Screenshot_2020-11-21_at_10.28.43_AM.png)

Overall Queue ADT needs: 

- A pointer frontNode to point to the node at front position (initially point to NULL)
- A pointer backNode to point to the node at back position (initially point to NULL)

Note :

- Adding items can only be done at the back
- Removing items can only be done from the front
- Adding & removing data involves manipulation of linkages including frontNode and backNode
- Queue can dynamically grow and shrink
- Additional memory need to store the linkages

## Specfication of Queue ADT (queue.h)

```cpp
// Queue.h - Specification of Queue ADT (Pointer-based)
#pragma once
#include<string>
#include<iostream>
using namespace std;

typedef char ItemType;

class Queue
{
  private:
    struct Node
    {
      ItemType item;	// item
      Node     *next;	// pointer pointing to next item
    };

Node *frontNode;	// point to the first item
Node *backNode;	// point to the first item

  public:
	// constructor
	Queue();

  ~Queue();

	// enqueue (add) item at the back of queue
	bool enqueue(ItemType item);

	// dequeue (remove) item from front of queue
	bool dequeue();

      // dequeue (remove) and retrieve item from front of queue
	bool dequeue(ItemType &item);

	// retrieve (get) item from front of queue
	void getFront(ItemType &item); 

	// check if the queue is empty
	bool isEmpty(); 

      // display items in queue from front to back
      void displayItems();
};
```

## Operations

### E**nqueue**

1. Create a new node to store the item
2. Make the back node's next pointor (backNode→next) point to the new node (backNode→next = newNode)
3. Make the back node point to the new node (backNode = newNode)

![Queue%20669bfd96682746deabd0dd1d97319447/Screenshot_2020-11-22_at_10.03.25_AM.png](Queue%20669bfd96682746deabd0dd1d97319447/Screenshot_2020-11-22_at_10.03.25_AM.png)

```cpp
bool Queue::enqueue(ItemType item){

    // Create a new node
    Node* newNode = new Node;
    // Store the item to the node
    newNode->item = item;
    // Initialize the next pointer to null
    newNode->next = NULL;

    // If queue is empty
    if(frontNode == NULL){
        // set front node (pointer) to point to new node
        frontNode = newNode;
    } 
    // Else
    else{
        // set back node’s next pointer to point to the new node
        backNode->next = newNode;
    }
    // set back node (pointer) to point to new node
    backNode = newNode;
    
    // Return true
    return true;

}
```

### Dequeue

1. Use a temp pointer to point to front node
2. Make the frontNode point to the next node in queue
3. Make removed node’s next pointer point to NULL and deallocate memory from removed node

![Queue%20669bfd96682746deabd0dd1d97319447/Screenshot_2020-11-22_at_10.03.15_AM.png](Queue%20669bfd96682746deabd0dd1d97319447/Screenshot_2020-11-22_at_10.03.15_AM.png)

```cpp
bool Queue::dequeue(){
    

    Node* temp = NULL;
    // If frontNode points to same location as backNode (i.e. only one node in queue)
    if(frontNode == backNode){
        //set frontNode to NULL
        frontNode = NULL;
        //set backNode to NULL
        backNode = NULL;
    } 
    // Else
    else{
        // set temp (pointer) point to the front node
        temp = frontNode;
        
        //make frontNode(pointer) point to the next node in stack
        frontNode = frontNode->next;

    }
    // make removed node’s next (pointer) point to NULL
    temp->next = NULL;
    
    // deallocate memory from removed node
    delete temp;

}

bool Queue::dequeue(ItemType &item){
    

    Node* temp = NULL;
    // If frontNode points to same location as backNode (i.e. only one node in queue)
    if(frontNode == backNode){
        //set frontNode to NULL
        frontNode = NULL;
        //set backNode to NULL
        backNode = NULL;
    } 
    // Else
    else{
        // set temp (pointer) point to the front node
        temp = frontNode;
        
        //make frontNode(pointer) point to the next node in stack
        frontNode = frontNode->next;

        item = temp->item;

    }
    // make removed node’s next (pointer) point to NULL
    temp->next = NULL;
    
    // deallocate memory from removed node
    delete temp;

 

}
```

### getFront

1. if empty return false
2. if not empty return the value

```cpp
void Queue::getFront(ItemType &item){
    //If queue is not empty
    if(frontNode != NULL){
        //  item would be item contained in the front node
        item = frontNode->item;
    
    }
}
```

# Array Based Implementation

Yet to do