#include <iostream>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid)
{
    int painterCount = 1;
    int boardCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (boardCount + arr[i] <= mid)
        {
            boardCount += arr[i];
        }
        else
        {
            painterCount++;
            if (painterCount > m || arr[i] > mid)
            {
                return false;
            }
            boardCount = arr[i];
        }
    }
    return true;
}
int allocatePainter(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[4] = {5, 5, 5, 5};
    cout << allocatePainter(arr, 4, 2);
    return 0;
}