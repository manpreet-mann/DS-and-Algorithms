#include <iostream>
#include <algorithm> // Include the algorithm library to use std::sort
int main()
{
    int arr[] = {5, 2, 8, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    // Sorting the array in ascending order
    std::sort(arr, arr + n);

    // Printing the sorted array
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
