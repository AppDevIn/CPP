#include <iostream>

using namespace std;

int search(int dataArray[], int arraySize, int start, int target);
int binarySearch(int dataArray[], int first, int last, int target);

int main(int argc, char const *argv[])
{
    int dataArray[1000];

    for (int i = 2; i <= 2000; i += 2) // ...initialize it
    {
        dataArray[(i - 2) / 2] = i;
    }
    int len = sizeof(dataArray) / sizeof(dataArray[0]);
    int target;

    cout << "Enter the target value: ";
    cin >> target;

    cout << "" << endl;

    cout << binarySearch(dataArray, 0, len-1, target) << endl;

    cout << "" << endl;

    cout << search(dataArray, len, 0, target) << endl;
    

    return 0;
}

int binarySearch(int dataArray[], int first, int last, int target)
{
    int mid = (first + last) / 2;
    if(first > last){
        return -1;
    }
    else if (dataArray[mid] == target)
    {
        return mid;
    }
    else if (target < dataArray[mid])
    {
        return binarySearch(dataArray, first, mid - 1, target);
    }
    else
    {
        return binarySearch(dataArray, mid + 1, last, target);
    }
}

int search(int dataArray[], int arraySize, int start, int target){
    if(arraySize <= start){
        return -1;
    } else if(target < dataArray[start]){
        return -1;
    }
    else if(dataArray[start] == target){
        return start;
    } else{
        return search(dataArray, arraySize, start += 1, target);
    }
}