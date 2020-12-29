#include <iostream>

using namespace std;

int search(int arr[], int n, int target);
int binarySearch(int dataArray[], int arraySize, int target);

int main(int argc, char const *argv[])
{
    int dataArray[1000];

    for (int i = 2; i <= 2000; i += 2) // ...initialize it
    {
        dataArray[(i - 2) / 2] = i;
    }

    cout << "Enter the target value: ";
    int target;
    cin >> target;

    int len = sizeof(dataArray) / sizeof(dataArray[0]);
    cout << ((binarySearch(dataArray, len, target) == -1) ? "Not Found" : "Found") << endl;

    return 0;
}

int search(int arr[], int n, int target)
{

    int count = 0;
    while (count != n)
    {
        if (arr[count] == target)
            return count;
        else if (arr[count] > target)
            return -1;
        count++;
    }

    return -1;
}

int binarySearch(int dataArray[], int arraySize, int target)
{

    int left = 0;
    int right = arraySize - 1;



    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (dataArray[mid] == target)
        {
            return mid;
        }
        else if (target < dataArray[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return -1;
}
