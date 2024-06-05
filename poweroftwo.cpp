#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 30; i++)
    {
        int answer = pow(2, i);
        if (answer == n)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
}