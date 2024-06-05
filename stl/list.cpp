#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;

    list<int> new_list (5, 100);
    for (int i : new_list)
    {
        cout << i << " ";
    }
    cout << endl;
    list<int> n(l); // l list is copied to n (l list is empty)
    l.push_back(1);
    l.push_front(2);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout << "After erase" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size of list " << l.size() << endl;
    return 0;
}