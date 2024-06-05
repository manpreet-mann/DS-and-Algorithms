#include <iostream>
using namespace std;
void printCounting(int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << i << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << "Counting upto given range is " << endl;
    printCounting(n);
    return 0;
}