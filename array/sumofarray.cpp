#include <iostream>
using namespace std;
int sumArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int size;
    cin >> size;

    int arr[20];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Sum of the elements of array are: " << sumArray(arr, size);
    return 0;
}