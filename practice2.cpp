#include <iostream>
using namespace std;
// print even numbers from 1 to n.
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            /* code */
            cout << i;
        }
    }

    return 0;
}