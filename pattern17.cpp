#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // print first triangle
        int j = 1;
        while (j <= (n - i + 1))
        {
            cout << j;
            j++;
        }
        // print star pattern
        int start = i - 1;
        while (start)
        {
            cout << "*";
            start = start - 1;
        }
        // print star 2 pattern
        int start2 = i - 1;
        while (start2)
        {
            cout << "*";
            start2 = start2 - 1;
        }
        // print second triangle
        int k = (n - i + 1);
        while (k)
        {
            cout << k;
            k--;
        }

        cout << endl;
        i++;
    }
}