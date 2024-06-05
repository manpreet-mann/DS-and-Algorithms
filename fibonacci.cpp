#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter range: " << endl;
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << " " << endl
         << b << endl;
    for (int i = 0; i <= n; i++)
    {
        int nextnumber = a + b;
        cout << nextnumber << endl;
        a = b;
        b = nextnumber;
    }
}