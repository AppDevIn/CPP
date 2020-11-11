#include "stack.h"  // header file

Stack::Stack(){
    topNode = NULL;
}


Stack::~Stack(){
    //    set temp (pointer) point to the top node
    Node* temp = topNode;
    while (temp){
        //    make topNode(pointer) point to the next node in stack
        topNode = topNode->next;
        //    make removed node’s next (pointer) point to NULL
        temp->next = NULL;
        //    deallocate memory from removed node
        delete temp;
        temp = topNode;
    }
}


bool Stack::push(ItemType item){
    // Create a new node
    Node* node = new Node;
    // Store the item to the node
    node->item = item;
    // Initialize the next pointer to null
    node->next = NULL;

    if(topNode != NULL){
        // set new node’s next pointer to point to node pointed to by topNode
        node->next = topNode;
    }
    
    // set topNode (pointer) to point to new node
    topNode = node;

    // Return true
    return true;
    
}

bool Stack::pop(){

    // If stack is not empty
    if(topNode != NULL){
        //    set temp (pointer) point to the top node
        Node* temp = topNode;
        //    make topNode(pointer) point to the next node in stack
        topNode = topNode->next;
        //    make removed node’s next (pointer) point to NULL
        temp->next = NULL;
        //    deallocate memory from removed node
        delete temp;

        return true;
    }

    return false;
    


}


bool Stack::pop(ItemType &item){

    // If stack is not empty
    if(topNode != NULL){
        //    set temp (pointer) point to the top node
        Node* temp = topNode;
        //    make topNode(pointer) point to the next node in stack
        topNode = topNode->next;
        //    make removed node’s next (pointer) point to NULL
        temp->next = NULL;
        //Reference to the item
        item = temp->item;
        //    deallocate memory from removed node
        delete temp;

        return true;
    }

    return false;
    
}


void Stack::getTop(ItemType &item){
    if(topNode != NULL){
        item = topNode->item;
    }
}

bool Stack::isEmpty(){
    return topNode == NULL;
}

void Stack::displayInOrder(){
    Node* node = topNode;

    while (node)
    {
        cout << node->item << endl;
        node = node->next;
    }

}

void Stack::displayInOrderOfInsertion(){

    Node* node = topNode;
    Stack stack = Stack();
    while (node)
    {
        
        stack.push(node->item);
        node = node->next;
    }
    stack.displayInOrder();
    
    

}