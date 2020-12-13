#include "List.h" // header file

List::List()
{
    size = 0;

    front = new Node;
    front->next = NULL;
}

bool List::add(int index, ItemType item)
{
    // If index is valid
    if (index <= size && index >= 0)
    {
        //Create the node
        Node *newNode = new Node;

        //Store the item
        newNode->item = item;

        // Initialize the next pointer to null
        newNode->next = NULL;

        // If inserting in front (i.e., index is 0)
        if (index == 0)
        {
            // Set first node (pointer) to point to new node
            newNode->next = front;
            // Set new node to point to node pointed to by first node
            front = newNode;
        }
        else
        {
            // Traverse to the node just before the indexed node
            Node *current = front;
            for (int i = 0; i < (index - 1); i++)
                current = current->next;

            // Set new node to point to the indexed node
            newNode->next = current->next;
            // Set that node to point to the new node
            current->next = newNode;
        }

        size++;
        return true;
    }
    else
        return false;
}

void List::remove(int index)
{
    // If index is valid
    if (index < size && index >= 0)
    {

        // If node to be removed is the first node
        if (index == 0)
        {
            //     Set first node to point to the second node (or NULL)
            Node *tmp = front->next;
            front->next = NULL;
            front = tmp;
        }
        else
        {

            //Traverse to the node just before the node to be removed
            Node *current = front;
            for (int i = 0; i < (index - 1); i++)
                current = current->next;
            //Set that node to point to the node after the position
            Node *tmp = current->next->next;
            current->next = NULL;
            current->next = tmp;
        }
        size--;
    }
}

ItemType List::get(int index)
{
    // If index is valid
    if (index < size && index >= 0)
    {
        // Traverse the list to the index
        Node *current = front;
        for (int i = 0; i <= (index - 1); i++)
            current = current->next;

        // Return the item contained in the node
        return current->item;
    }

    return 'k';
};

int List::count(ItemType item)
{

    Node *curr = front;
    int count = 0;
    while (curr->next)
    {

        if (item == curr->item)
            count++;
        curr = curr->next;
    }

    return count;
}

int List::countR(ItemType item)
{

    return rCount(front, item);
}

int List::rCount(Node *curr, ItemType item)
{

    if (!curr)
        return 0;

    return item == curr->item ? rCount(curr->next, item) + 1 : rCount(curr->next, item);
}

void List::reverse()
{

    Node *curr = front;
    Node *next = NULL, *prev = NULL;

    while (curr->next)
    {

        next = curr->next;

        curr->next = prev;

        prev = curr;
        curr = next;
    }

    front = prev;
}

void List::reverseR()
{
    front = rReverse(front);
}

List::Node *List::rReverse(Node *curr)
{

    if (!curr->next)
        return curr;

    Node *temp = rReverse(curr->next);

    Node *t = temp;

    while (t->next)
    {
        t = t->next;
    }

    curr->next = NULL;

    t->next = curr;

    return temp;
}

void List::display()
{

    Node *current = front;
    for (int i = 0; i < size; i++)
    {

        cout << current->item;
        current = current->next;
    }

    cout << endl;
}

void List::removeDuplicatesfromUnsorted()
{

    //Store front in curr
    Node *curr = front;
    //Traverse through the node
    while (curr)
    {
        //Check the number of occurance
        //if more than 1 remove
        if (!curr->next)
            break;
        if (countR(curr->next->item) > 1)
        {
            Node *temp = curr->next;
            curr->next = NULL;
            curr->next = temp->next;
            delete temp;
            size--;
        }
        else
        {
            //Point to the next pointor
            curr = curr->next;
        }
    }
}

void List::removeDuplicatesfromSorted()
{

    //Store front in curr
    Node *curr = front;
    //Traverse through the node
    while (curr)
    {
        ItemType item = curr->item;
        Node *temp = curr;
        if (!curr->next)
            break;
        while (temp->next->item == item)
        {

            Node *t = temp->next;
            temp->next = NULL;
            temp->next = t->next;
            delete t;
            size--;
        }

        curr = curr->next;
    }
}

void List::deleteAllOccurrences(ItemType item)
{
    Node *curr = front;

    while (curr)
    {
        if (!curr->next)
            break;
        if (curr->next->item == item)
        {
            Node *temp = curr->next;
            curr->next = NULL;
            curr->next = temp->next;
            delete temp;
            size--;
        }
        else
        {
            curr = curr->next;
        }
    }

    if (front->item == item)
    {
        Node *temp = front;
        front = temp->next;
        delete temp;
        size--;
    }
}

int List::getLength() { 
    
    Node* curr = front;
    int count = 0;
    while(curr->next){
        curr = curr->next;
        count++;
    }

    return count;

}

void List::mergeLLAt(List newList, int pos)
{

    if(pos <= size || pos >= 0){ 
        return;
    }
    if (pos == 0)
    {
        Node *curr = newList.getNode();
        Node* temp = curr;
        while (temp->next)
        {
            temp = temp->next;
        }

        temp->next = getNode();
        front = curr;
    }
    else
    {
        Node *curr = front;
        for (int i = 0; i < (pos - 1); i++)
        {
            curr = curr->next;
        }

        Node *temp = curr->next;

        Node *listNode = newList.getNode();
        Node *listNodeTemp = listNode;
        while(listNodeTemp->next){ listNodeTemp = listNodeTemp->next;}
        listNodeTemp->next = temp;

        curr->next = listNode;

    }
    size += newList.getLength();
}

List::Node *List::getNode()
{

    return front;
}

void List::reverseAt(int start, int end){

    Node* curr = front;
    Node* temp;
    Node* prev = NULL, *next = NULL;

    for (int i = 0; i < end; i++)
    {
        if(i <= start){
            curr = curr->next;
        }
        else if(i >= start && i < end){

            ItemType item = curr->item;
            
            Node* node = new Node;
            node->item = item;

            node->next = prev;
            prev = node;

            curr = curr->next;

            
            
        }


        
    }

    temp = prev;
    while (temp->next)
    {
        temp = temp->next;
    }

    temp->next = curr;


    curr = front;
    for (int i = 0; i < start; i++)
    {
        curr = curr->next;
        
    }

    curr->next =prev;
    




    
}


ItemType List::getMiddle(){
    int mid = 0;
    if(size % 2 == 0){
        mid = ((size + 1) / 2);
    } else{
        mid = (size / 2) + 1;
    }

    Node* curr = front;

    for (int i = 0; i < mid-1; i++)
    {
        curr = curr->next;
    }

    return curr->item;
    



}
