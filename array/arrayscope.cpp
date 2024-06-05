#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << "Inside the function" << endl;
    // updating the first element --> will update array in main funtion too. Because during function call, it is sending the base address of the array. Not the whole array.
    arr[0] = 120;

    // printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going back to main function" << endl;
}
int main()
{
    int arr[3] = {1, 2, 3};
    update(arr, 3);
    cout << "Printing the main function" << endl;
    // printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}