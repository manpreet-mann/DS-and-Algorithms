#include <iostream>
using namespace std;
int ap(int n)
{
    return (3 * n + 7);
}
int main()
{
    int n;
    cin >> n;
    int answer = ap(n);
    cout << answer;
}