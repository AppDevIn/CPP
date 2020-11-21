#include "queue.h"  // header file


Queue::Queue(){
    frontNode = NULL;
    backNode = NULL; 
}

Queue::~Queue(){

}

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


void Queue::getFront(ItemType &item){
    //If queue is not empty
    if(frontNode != NULL){
        //  item would be item contained in the front node
        item = frontNode->item;
    
    }

    

}