#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        if (arr[mid] == key)
            return mid;

        if (key > arr[mid])
            start = mid + 1;
        else // key < arr[mid]
            end = mid - 1;

        // mid = (start + end) / 2;
        mid = start + ((end - start) / 2);
    }
    return -1;
}

int main()
{

    // Monotonic arrays- Increasing
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 5, 7, 9, 13};

    int evenIndex = binarySearch(even, 6, 12);
    cout << "The Index of Even Array is" << evenIndex;
    int oddIndex = binarySearch(odd, 5, 5);
    cout << "The Index of Odd Array is" << oddIndex;
    return 0;
}