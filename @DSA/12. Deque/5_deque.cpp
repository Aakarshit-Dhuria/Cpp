#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq = {10, 15, 30, 5, 12};
    auto it = dq.begin();
    it++;
    dq.insert(it, 20);  // inserts before the position of given iterator.
    dq.pop_front();
    dq.pop_back();
    cout << dq.size() << endl;
    for (auto x : dq)
    {
        cout << x << " ";
    }
    return 0;
}