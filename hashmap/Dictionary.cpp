#include "Dictionary.h"


Dictionary::Dictionary(){
    size = 0;

    for (int i = 0; i < MAX_SIZE ; i++){
        items[i] = NULL;
    }    
    
}

Dictionary::~Dictionary(){


    for (int i = 0; i < MAX_SIZE; i++)
    {

        Node* node = items[i];

        if(node){
            while(node->next){

                Node* temp = node->next;            

                node->next = NULL;

                node = node->next;

                delete temp;

            }

        } 


        items[i] = NULL;

        delete node;
        

    }
    size = 0;
    


}

int charvalue(char c)
{
	if (isalpha(c))
	{
		if (isupper(c))
			return (int)c - (int) 'A';
		else
			return (int)c - (int) 'a' + 26;
	}
	else
		return -1;
}

int Dictionary::hash(KeyType key){
    int total = charvalue(key[0]);

	for (int i = 1; i < key.length(); i++)
	{
		if (charvalue(key[i]) < 0)  // not an alphabet
			continue;
		total = total * 52 + charvalue(key[i]);
	    
        total %= MAX_SIZE;
    }


    return total;
}


bool Dictionary::add(KeyType newKey, ItemType newItem){
    // Compute the index using hash function
    int hashValue = hash(newKey);

    //Get the node from the items 
    Node* node = items[hashValue];

    //Create a new node
    Node* newNode = new Node;

    //Set Items and keys into the newNode
    newNode->item = newItem;
    newNode->key = newKey;
    newNode->next = NULL;


    // Check if thee if item in the node is empty
    if(!node){
        //Set list at index to point to new node 
        items[hashValue] = newNode;

    } else {
        //Check if the first node key is the smae 
        if(node->key == newNode->key){
            return false;
        } else { 

            //Trasverse throught the linked list
            while(node->next){
                //Assign it to the next node to node 
                node = node->next;
                //Check if the node has the same key 
                if(node->key == newNode->key){
                    return false;
                }
            }
        }
            

        //Set the next to the new node 
        node->next = newNode;
    }
    
    // Increase the size by 1
    size++;

    // Return true  
    return true;

}

ItemType Dictionary::get(KeyType key){    

    ItemType item = 0;

    //Get the hash value for the key
    int hashValue = hash(key);

    //Get the item based on the hashvalue 
    Node* node = items[hashValue]; 

    //Check if the first item is not empty     
    if(node){
        Node* current = node;
        //Trasverse through the node the find the key
        while(current){
            //If you got the key return the item
            if(current->key == key)
                return current->item;

            current = current->next;
        }

    }

    return item;


}

void Dictionary::remove(KeyType key){
    //Compute the index using hash function
    int hashValue = hash(key);
    Node* node = items[hashValue]; 

    // If list at index is not empty
    if(node){
        //Perform list remove of item with specified key
        
        Node* current = node;

        if(current->key == key){
            Node* next = current->next;
            current->next = NULL;

            Node* temp = current;

            current = next;
            
            items[hashValue] = current;

            delete temp;
            
        }else{
            while (current->next)
            {
                
                if(current->next->key ==  key){
                    Node* temp = current->next->next;
                    current->next->next = NULL;
                    current->next = NULL;
                    current->next = temp;

                }

                current = current->next;
            }
        }
        


        //Decrease the size by 1
        size--;

    }

}


void Dictionary::print(){
    
    for (int i = 0; i < MAX_SIZE ; i++)
    {
        Node* node = items[i];
        if(node){
            cout << node->key << " :" << node->item << endl;    

            while(node->next){
                cout << node->next->key << " :" << node->next->item << endl;    
                node = node->next;
            }
        }

    }

}


int Dictionary::getLength(){return size;}

bool Dictionary::replace(KeyType key, ItemType newItem){
    
    int hashvalue = hash(key);

    Node* node = items[hashvalue];

    while(node){

        if(node->key == key){
            node->item = newItem;
            return true;
        }else return false;
        

    }

    return false;


}

bool Dictionary::isEmpty(){ return bool(size); }
