#include<iostream>
#include "List.cpp"
using namespace std;

struct Node
{
    ItemType item;	// data item
    Node* next;	// pointer pointing to next item
};

int main(int argc, char const *argv[])
{
    List list = List();


    list.add(0);
    list.add(2);
    list.add(3);
    list.add(4);
    list.add(6);
    list.add(8);
    list.add(9);

    list.sortedInsert(5);
    list.sortedInsert(0);

    list.print();

    List list2 = List();
    list2.add(0);
    list2.add(2);
    list2.add(3);
    list2.add(4);
    list2.add(6);
    list2.add(8);
    list2.add(9);


    list.sortedMerge(list.firstNode,list2.firstNode);

    return 0;
}
