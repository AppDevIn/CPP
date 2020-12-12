#include "List.h"  // header file


List::List() {
    size = 0;
    
    front = new Node;
    front->next = NULL;

}




bool List::add(int index, ItemType item){
    // If index is valid
    if(index <= size && index >= 0){
        //Create the node
        Node *newNode = new Node;
        
        //Store the item
        newNode->item = item;

        // Initialize the next pointer to null
        newNode->next = NULL;

        // If inserting in front (i.e., index is 0)
        if(index == 0){
            // Set first node (pointer) to point to new node
            newNode->next = front;
            // Set new node to point to node pointed to by first node
            front = newNode;

        }else{
            // Traverse to the node just before the indexed node
            Node *current = front;
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
            Node *tmp = front->next;
            front->next = NULL;
            front = tmp;
        }else{

            //Traverse to the node just before the node to be removed
            Node *current = front;
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
        Node *current = front;
        for(int i = 0; i <= (index - 1); i++ )
            current =  current->next;
        
        // Return the item contained in the node
        return current->item;
    }

    return 'k';

};


int List::count(ItemType item){
    

    Node* curr = front;
    int count = 0;
    while(curr->next){

        if(item == curr->item) count++;
        curr = curr->next;

    }

    return count;

}



void List::display(){
    
    Node *current = front;
    for (int i = 0; i < size; i++)
    {

        cout << current->item << endl;
        current = current->next;
    }


    

}


