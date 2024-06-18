// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void SelectionSort(vector<int> &arr, int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[minIndex])
//                 minIndex = j;
//         }
//         swap(arr[minIndex], arr[i]);
//     }
// };

// selecti minimum and swap

void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        cout << i;
        for (int j = 0; j <= i - 1; j++)
        {
            cout << j;
            if (arr[i] < arr[mini])
            {
                mini = j;
                cout << j;
            }
            cout << i;
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    // cout << arr[n];
    // int *arr = new int[n];
    // cout << arr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selection_sort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}