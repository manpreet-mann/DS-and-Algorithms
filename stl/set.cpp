// set ke andar sare ke sare unique element store hote hai
// modification is not possible
// either add or delete no modification
// SET is slower than UNORDERED set

// complexity of insert, find, erase, count - operation is O(log n)
// complexity of size, begin, end, empty - is O(1)
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5); // inka koi frk nhi 5 sirf ek bar print hoga

    s.insert(1);
    s.insert(6);
    s.insert(0);

    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;
    set<int>::iterator it = s.begin();
    s.erase(it);
    for (auto i : s)
    {
        cout << i << endl;
    }

    cout << "5 is Present or not " << s.count(5) << endl;   // tells if element is present or not
    cout << "-5 is Present or not " << s.count(-5) << endl; // tells if element is present or not

    set<int>::iterator itr = s.find(5);
    cout << "Value present at itr " << *itr << endl;

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}