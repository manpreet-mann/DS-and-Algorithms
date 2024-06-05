#include <iostream>
#include <map>
// map me data key-value pair me store hota hai

// insert, erase, find, count - complexity O(log n)
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "manpreet";
    m[2] = "mann";
    m[13] = "me";

    m.insert({5, "bheem"});

    cout << "Before erase " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << " " << endl;
    }

    cout << "Finding 13 -> " << m.count(13) << endl;
    cout << "Finding -13 -> " << m.count(-13) << endl;

    m.erase(1);
    cout << "After erase " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << " " << endl;
    }
    cout << "Finding 1 -> " << m.count(1) << endl;

    auto it = m.find(5);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
    return 0;
}