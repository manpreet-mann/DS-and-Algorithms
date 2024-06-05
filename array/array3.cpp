#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    cout << "Printing the array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing done" << endl;
}
int main()
{
    int second[3] = {5, 7, 11};
    // accessing an element
    cout << "The value at 1 index is: " << second[1] << endl;

    int third[15] = {2, 7};
    int n = 15;
    printArray(third, 15);

    // initializing all locations with 0
    int fourth[10] = {0};
    n = 10;
    printArray(fourth, 10);

    int fourthSize = sizeof(fourth) / sizeof(int);
    cout << "Size of fourth array is: " << fourthSize << endl;

    return 0;
}