#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sortTwo(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{
    int arr[8] = {1, 0, 0, 1, 2, 0, 2, 1};
    cout << "Array before sorting " << endl;
    printArray(arr, 8);
    sortTwo(arr, 8);
    cout << "Array after sorting " << endl;
    printArray(arr, 8);
    return 0;
}