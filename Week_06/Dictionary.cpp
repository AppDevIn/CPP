#include "Dictionary.h"


Dictionary::Dictionary(){
    size = 0;

    for (int i = 0; i < MAX_SIZE ; i++){
        items[i] = NULL;
    }    
    
}

Dictionary::~Dictionary(){

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
    
    
    int total = 0;
    for (int i = 0; i < key.length(); i++) {
        total += charvalue(key[i]);
    }

    

    return total%MAX_SIZE;

}


bool Dictionary::add(KeyType newKey, ItemType newItem){
    // Compute the index using hash function
    int hashValue = hash(newKey);

    
    Node* node = items[hashValue];

    //Create a new node
    Node* newNode = new Node;

    //Set Items and keys into the newNode
    newNode->item = newItem;
    newNode->key = newKey;
    newNode->next = NULL;


    // If list at index is empty
    if(!node){
        //Set list at index to point to new node 
        items[hashValue] = newNode;

    } else {

        if(node->key == newNode->key){
            return false;
        } else 
            while(node->next){node = node->next;}
        
        node->next = newNode;
    }
    
    // Increase the size by 1
    size++;

    // Return true  
    return true;

}

ItemType Dictionary::get(KeyType key){

    int hashValue = hash(key);

    Node* node = items[hashValue]; 

    if(!node){
        return "";
    }else{

        Node* current = node;
        while(current){

            if(current->key == key)
                return current->item;

            current = current->next;
        }

    }

    return "";


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
                current = current->next;

                if(current->key ==  key){
                    Node* temp = current->next;
                    current->next = NULL;
                    current = NULL;
                    current = temp;

                }
            }
        }
        


        //Decrease the size by 1
        size--;

    }

}

int Dictionary::getLength(){return size;}

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


bool Dictionary::isEmpty(){ return bool(size); }
