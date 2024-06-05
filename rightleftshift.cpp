#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 3;
    cout << (a << 1) << endl; // left shift
    cout << (a >> 1) << endl; // right shift

    // preincrement ++i
    // postincrement i++
    // predecrement --i
    // postdecrement i--

    int i = 4;
    cout << i++ << endl;
    cout << i-- << endl;
    cout << ++i << endl;
    cout << --i << endl;
}