#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 5;
    cout << "Before swapping a & b respectively are " << a << " and " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping a & b respectively are " << a << " and " << b << endl;
}
