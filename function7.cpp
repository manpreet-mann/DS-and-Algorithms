#include <iostream>
using namespace std;
int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    int c;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << a << endl;
            continue;
        }
        if (i == 2)
        {
            cout << b << endl;
            continue;
        }
        else
        {
            c = a + b;
            a = b;
            b = c;
            cout << c << endl;
        }
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter the range of fibonacci series " << endl;
    cin >> n;
    fibonacci(n);
    return 0;
}