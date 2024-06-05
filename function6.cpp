// calculate set bits
#include <iostream>
using namespace std;
int setBits(int num)
{
    int count = 0;
    while (num)
    {
        if (num & 1)
            count++;
        num = num >> 1;
    }
    return count;
}

int main()
{
    int num1, num2;
    cout << "Enter first number \n";
    cin >> num1;
    cout << "Enter second number\n";
    cin >> num2;
    int setInA = setBits(num1);
    int setInB = setBits(num2);

    cout << setInA + setInB;
    return 0;
}