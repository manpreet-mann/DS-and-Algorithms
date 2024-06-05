#include <iostream>
using namespace std;
int main()
{
    char ch[5] = {'a', 'b', 'c', 'r', 'm'};
    cout << ch[3] << endl;

    cout << "Printing the array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << endl;
    cout << "Everything is fine" << endl;
    return 0;
}