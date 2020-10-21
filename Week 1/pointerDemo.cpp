#include <iostream>
using namespace std;

int main()
{
    int value1 = 200000;
    int value2;
    int* ptr;
    ptr = &value1;
    cout << "\nThe value of ptr: " << *ptr;
    value2 = *ptr;
    cout << "\nThe value of value2: " << value2;
    cout << "\nThe address of value1: " << &value1;
    cout << "\nThe address of ptr: " << ptr;
    ptr = &value2;
    *ptr += 2000;
    cout << "\nThe address of value1: " << value1;
    cout << "\nThe value of value2: " << value2;


    return 0;
}