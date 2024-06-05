#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 4> a = {1, 4, 2, 9};
    int size = a.size();
    cout << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Element at 2nd index is: " << a.at(2) << endl;
    cout << "Is array empty or not: " << a.empty() << endl;

    cout << "First element " << a.front() << endl;
    cout << "last element " << a.back() << endl;

    return 0;
}