#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    for (int i = 2; i <= num - 1; i++)
    {
        if (num % 2 == 0)
        {
            cout << "not prime";
        }
        else if (num == 2)
        {
            cout << "prime";
        }
        else
        {
            cout << "prime";
        }
    }
    return 0;
}