#include <iostream>
#include "stack.cpp"


int main(int argc, char const *argv[])
{


    Stack s;
    s.push(3);
    s.push(4);

    int value;
    s.getTop(value);

    s.displayInOrderOfInsertion();

    s.pop();

    s.displayInOrderOfInsertion();




    return 0;
}
