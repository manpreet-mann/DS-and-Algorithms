#include <iostream>
using namespace std;
int main()
{
    int num = 2;
    switch (num)
    {
    case 1:
        cout << "One ";
        break;
    case 2:
        cout << "Two ";
        switch (num)
        {
        case 2:
            cout << "Again two";
            break;
        }
        break;
    default:
        cout << "Default";
        break;
    }
}
// use of continue in switch is not valid
// continue -- skip one iteration 
// break --- get out of loop