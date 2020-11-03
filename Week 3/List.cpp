#include "List.h"  // header file


List::List() {
    size = 0;
    firstNode = new Node;
    firstNode->next = NULL;

}

List::~List(){

}

bool List::add(ItemType item){

    //Create the node
    Node *newNode = new Node;
    
    //Store the item
    newNode->item = item;

    // Initialize the next pointer to null
    newNode->next = NULL;

    //If list is empty
    if (size == 0){
        //Set first node (pointer) to point to new node
        firstNode = newNode;

    }else
    {
        //Traverse to the last node
        Node *current = firstNode;
        while(current->next){
            current = current->next;

        }

        // Set last node to point to the new node
        current->next = newNode;
        
    }
    
    
    // Increase the size by 1
    size ++;
    // Return true
    return true;



}

bool List::add(int index, ItemType item){
    // If index is valid
    if(index < size && index >= 0){
        //Create the node
        Node *newNode = new Node;
        
        //Store the item
        newNode->item = item;

        // Initialize the next pointer to null
        newNode->next = NULL;

        // If inserting in front (i.e., index is 0)
        if(index == 0){
            // Set first node (pointer) to point to new node
            newNode->next = firstNode;
            // Set new node to point to node pointed to by first node
            firstNode = newNode;

        }else{
            // Traverse to the node just before the indexed node
            Node *current = firstNode;
            for(int i = 0; i < (index - 1); i++ )
                current =  current->next;
            
            // Set new node to point to the indexed node
            newNode->next = current->next;
            // Set that node to point to the new node
            current->next = newNode;
        }
        
      
        size++;
        return true;

    } else
        return false;

}


void List::remove(int index){
    // If index is valid
    if(index < size && index >= 0){
        
        // If node to be removed is the first node
        if(index == 0){
        //     Set first node to point to the second node (or NULL)
            Node *tmp = firstNode->next;
            firstNode->next = NULL;
            firstNode = tmp;
        }else{

            //Traverse to the node just before the node to be removed
            Node *current = firstNode;
            for(int i = 0; i < (index - 1); i++ )
                current =  current->next;
            //Set that node to point to the node after the position
            Node *tmp = current->next->next;
            current->next = NULL;
            current->next = tmp;
        
        }
        size--;

        
    }

}


ItemType List::get(int index){
    // If index is valid
    if(index < size && index >= 0){
        // Traverse the list to the index
        Node *current = firstNode;
        for(int i = 0; i <= (index - 1); i++ )
            current =  current->next;
        
        // Return the item contained in the node
        return current->item;
    }

    return "No string";

};

bool List::isEmpty(){
    return bool(!size);
}

int List::getLength(){
    return size;
}

void List::print(){
    
    Node *current = firstNode;
    for (int i = 0; i < size; i++)
    {

        cout << current->item << endl;
        current = current->next;
    }


    

}


