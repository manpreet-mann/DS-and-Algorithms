#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "Finding 5 " << binary_search(v.begin(), v.end(), 5) << endl;
    cout << "Finding 6 " << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "Lower bound " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl; // this returns iterator
    cout << "Upper bound " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    int a = 3;
    int b = 5;
    cout << "Max-->" << max(a, b) << endl;
    cout << "Min-->" << min(a, b) << endl;
    cout << "Swapping a, b --> " << endl;
    swap(a, b);
    cout << "Printing 'a' after swapping " << a << endl;
    cout << "Printing 'b' after swapping " << b << endl;

    string s = "abcd";
    reverse(s.begin(), s.end());
    cout << "Reversed string - " << s << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After rotate " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // sort function is based INTROSORT. introsort is combination of 3 algorithm - quick sort, heap sort, insertion sort
    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}