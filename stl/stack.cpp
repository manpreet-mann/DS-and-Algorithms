// lIFO
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Manpreet");
    s.push("Mann");
    s.push("Me");
    cout << "Top element is " << s.top() << endl;
    s.pop();
    cout << "Top element is " << s.top() << endl;
    cout << "Size of stack is " << s.size() << endl;
    cout << "empty or not " << s.empty();
    return 0;
}