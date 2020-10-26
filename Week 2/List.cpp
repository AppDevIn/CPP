// List.cpp - Implementation of List ADT using Array

#include "List.h"  // header file


// constructor
template <class T>
List<T>::List() { size = 0; }

// add an item to the back of the list (append)

template <class T>
bool List<T>::add(T const& item)
{
	bool success = size < MAX_SIZE;
	if (success)
	{
		items[size] = item;    // add to the end of the list
		size++;                // increase the size by 1
	}
	return success;
}

// add an item at a specified position in the list (insert)
template <class T>
bool List<T>::add(int index, T const& item)
{
	bool success = (index >= 0) && (index <= size) && (size < MAX_SIZE);
	if (success)
	{  // make room for the item by shifting all items at
	   // positions >= index toward the end of the
	   // List (no shift if index == size + 1)
		for (int pos = size; pos >= index; pos--)
			items[pos] = items[pos - 1];
		// insert the item
		items[index] = item;
		size++;  // increase the size by 1
	}
	return success;
}

// remove an item at a specified position in the list
template <class T>
void List<T>::remove(int index)
{
	bool success = (index >= 0) && (index < size);
	if (success)
	{  // delete item by shifting all items at positions >
	   // index toward the beginning of the list
	   // (no shift if index == size)
		for (int pos = index; pos < size; pos++)
			items[pos] = items[pos + 1];
		size--;  // decrease the size by 1
	}

}

// get an item at a specified position of the list (retrieve)
template <class T>
T List<T>::get(int index)
{
	bool success = (index >= 0) && (index < size);
	if (success)
		return items[index];
	else
		throw out_of_range("Die");
		
}

// check if the list is empty
template <class T>
bool List<T>::isEmpty() { return size == 0; }

// check the size of the list
template <class T>
int List<T>::getLength() { return size; }

// display the items in the list
template <class T>
void List<T>::print()
{
	// if(size == 0){
	// 	cout << "The list is empty" << endl;
	// 	return;
	// }
	// for (int i = 0; i < size; i++)
	// {
	// 	cout << items[i] << endl;
	// }

}

// replace the  item in the specified index in the list
template <class T>
void List<T>::replace(int index, T const& item)
{
	items[index] = item;

}