#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int number = 3;
    for (int i = 0; i < n; i++)
    {
        if (number <= n)
        {
            cout << number << endl;
            number += 3;
        }
    }

    return 0;
}