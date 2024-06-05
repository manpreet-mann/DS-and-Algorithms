#include <iostream>
using namespace std;
// factorial
int main()
{
    int num;
    cin>>num;
    int multiple = 1;
    for (int i = 1; i <= num; i++)
    {
        multiple = multiple * i;
    }
    cout << multiple;

    return 0;
}