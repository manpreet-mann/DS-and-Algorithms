#include <iostream>
using namespace std;
int sqrtInteger(int num)
{
    int s = 0;
    int e = num;
    int mid = s + (e - s) / 2;
    int ans = 0;
    while (s <= e)
    {
        int square = mid * mid;
        if (mid == num)
        {
            return mid;
        }

        if (square <= num)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int num;
    cin >> num;
    cout << "Square of " << num << " is: " << sqrtInteger(num);
    return 0;
}