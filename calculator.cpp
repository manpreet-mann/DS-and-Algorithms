#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    char operation;
    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    cout << "Enter the operation." << endl;
    cout << "Choose from +, -, *, /, %" << endl;
    cin >> operation;
    switch (operation)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    case '%':
        cout << a % b;
        break;

    default:
        cout << "Enter valid operator";
        break;
    }
}