// selection Sort usage == when array size is short
// time complexity == O(n ** 2) // O(n*n)
// space complexity == O(1)
#include <iostream>
using namespace std;
int selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main()
{
    int arr[5] = {9, 2, 7, 4, 5};
    selectionSort(arr, 5);
    cout << "Sorted array is: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}