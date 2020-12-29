#include <iostream>

using namespace std;

int search(int arr[], int n, int target);
int binarySearch(int dataArray[], int arraySize, int target);

static int comparsionsB = 0;
static int comparsionsS = 0;

int main(int argc, char const *argv[])
{
    int dataArray[1000];

    for (int i = 2; i <= 2000; i += 2) // ...initialize it
    {
        dataArray[(i - 2) / 2] = i;
    }
    int len = sizeof(dataArray) / sizeof(dataArray[0]);
    int target = 1;

    while (target != 0)
    {
        cout << "Enter the target value: ";
        cin >> target;

        cout << "" << endl;

        cout << ((binarySearch(dataArray, len, target) == -1) ? "Not Found" : "Found") << endl;
        cout << "Binary Comparsions: " << comparsionsB << endl;

        cout << "" << endl;

        cout << ((search(dataArray, len, target) == -1) ? "Not Found" : "Found") <<  endl;;
        cout << "Search Comparsions: " << comparsionsS << endl;

        comparsionsB = 0;
        comparsionsS = 0;

    }
    return 0;
}

int search(int arr[], int n, int target)
{

    int count = 0;
    while (count != n)
    {
        comparsionsS++;
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
        comparsionsB++;
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
