#include "queueArr.h"

CircularArrayQueue::CircularArrayQueue(){
    
  	
    front = 0;
  	back = MAX_SIZE - 1; // back = -1 for non-circular array
  	count = 0;

}

bool CircularArrayQueue::enqueue(ItemType item){
    
   bool success = (count != MAX_SIZE);
   if(success)
   {  
      back = (back + 1) % MAX_SIZE; //  back++ for non-circular array
      items[back] = item;           // enqueue the item
      count++;
   }  
   return success;


}

bool CircularArrayQueue::dequeue()
{
   bool success = !isEmpty();
   if (success)
   {
      front = (front + 1) % MAX_SIZE; // dequeue item
                                                                                    // front++ for non-circular array
      count--;   
   }
   return success;
}  

void CircularArrayQueue::getFront(ItemType& item)
{
   bool success = !isEmpty();
   if (success)
      item = items[front];
   else
      item = -1;
}  

void CircularArrayQueue::displayItems(){
    for (int i = front; i <= back ; i++)
    {
        
        cout << items[i] << "\t";
        
    }

    cout << endl;
    
}

bool CircularArrayQueue::isEmpty(){
    return count == 0;
}

