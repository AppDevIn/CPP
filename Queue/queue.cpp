#include "queue.h"  // header file


Queue::Queue(){
    frontNode = NULL;
    backNode = NULL; 
}

Queue::~Queue(){

    Node* node = frontNode;

    while(node){

        frontNode = frontNode->next;

        node->next = NULL;

        delete node;
        node = frontNode;
    }

    // backNode->next = NULL;
    // delete backNode;
    
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

bool Queue::dequeue(){
    

    Node* temp = NULL;
    // If frontNode points to same location as backNode (i.e. only one node in queue)
    if(isEmpty()){
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

    return true;


}


bool Queue::dequeue(ItemType &item){
    

    Node* temp = NULL;
    // If frontNode points to same location as backNode (i.e. only one node in queue)
    if(isEmpty()){
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

    return true;


}


void Queue::getFront(ItemType &item){
    //If queue is not empty
    if(frontNode != NULL){
        //  item would be item contained in the front node
        item = frontNode->item;
    
    }
}

void Queue::displayItems(){
    

    if(!isEmpty()){
        Node* node = frontNode;

        while(node){
            cout << node->item << "\t";
            node = node->next;
        }

        cout << endl;
    }
}

bool Queue::isEmpty(){
    return frontNode == NULL;
}

void Queue::push_front(ItemType item){

    if(!frontNode){
        //Create a node
        Node* node = new Node;
        node->item = item;

        //new node next point to front node
        node->next = frontNode;

        //Set front node to new node
        frontNode = node;
    } else
    {
        enqueue(item);
    }
    

}
