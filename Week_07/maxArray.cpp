#include <iostream>

using namespace std;

int maxArray(int array[], int start, int end);

int main(int argc, char const *argv[])
{
    int arr [] = {2,41,56,1,6865,24,7,873,5}; 
    cout << maxArray(arr , 0, sizeof(arr)/sizeof(arr[0])-1) << endl;
    return 0;
}

int maxArray(int array[], int start, int end){

    if ( end == start ){
        return array[start];
    } else {
        int mid = (start + end) / 2;
        return max(maxArray(array,start, mid), maxArray(array, mid+1, end));
  
    }
    
}