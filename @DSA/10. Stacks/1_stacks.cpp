#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(15);
    s.push(20);
    s.push(35);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
    s.push(5);
    cout << s.top() << endl;
    cout << s.empty() << endl;
    return 0;
}