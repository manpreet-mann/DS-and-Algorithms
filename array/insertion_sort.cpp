// why insertion sort
// 1. adaptable
// 2. stable
// time complexity - O(n*n)      best case= O(n)     worst case = O(n*n)
// space complexity - O(n)
#include <iostream>
using namespace std;
int insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[5] = {9, 3, 6, 2, 7};
    insertionSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}