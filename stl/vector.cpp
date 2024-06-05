// vector is a DYNAMIC ARRAY
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // size = kitne element pade hai
    // capacity = kitna space assign hua elements ke liye

    // when we clear a vector, size becomes zero but capacity remains the same
    vector<int> v;

    vector<int> a(5, 1); // when size of vector is already known. 5 means size and 1 means initialized with 1
    vector<int> last(a);
    cout << "Print last " << endl;
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Printing a" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "capacity now(at the beginning) is " << v.capacity() << endl;

    v.push_back(1);
    cout << "Now capacity is " << v.capacity() << endl;

    v.push_back(2);
    cout << "Now capacity is " << v.capacity() << endl;

    v.push_back(3); // end me 3 daal diya
    cout << "Now capacity is " << v.capacity() << endl;

    cout << "Element at 2nd index is " << v.at(2) << endl;
    cout << "Front " << v.front() << endl;
    cout << "Back " << v.back() << endl;

    cout << "vector before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back(); // end me se 3 nikal dena
    cout << "vector after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size of vector before clear function " << v.size() << endl;
    v.clear();
    cout << "Size of vector after clear function " << v.size() << endl;
    return 0;
}