// complement of base 10 integer
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mask = 0;
    if (n == 0)
    {
        cout << 1;
        return 0;
    }
    int original = n;
    while (n != 0)
    {
        mask = (mask << 1) | 1;
        n = n >> 1;
    }
    int answer = (~original) & mask;
    cout << answer;
}