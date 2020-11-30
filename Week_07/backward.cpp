#include <iostream>
#include <string>

using namespace std;

void printBackward(int array[], int n);

int main(int argc, char const *argv[])
{
    int arr [] = {1,2,3,4,5,6,7,8,9}; 
    printBackward(arr , 9);
    return 0;
}

void printBackward(int array[], int n){

    if(n > 1 ){printBackward(array,n-1);}

    cout << array[n-1] << endl;
    
    
}