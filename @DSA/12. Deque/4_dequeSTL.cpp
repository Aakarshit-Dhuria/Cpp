// All standard operations are O(1) in Deque STL
// IN STL, deque are stored as an array of pointers. the pointers further point to blocks of memory which contain data stored in the deque.
// whenever we need more storage for data we increase the number of pointers which retains the O(1) time complexity.
// but in worst case , the pointer array might also get full and we will have to double the array size and copy all the pointers in the new array but we still call it a constant time operation as it is contant in the number of copy constructors called.
// Note : But push_back and push_front are arguable like they might require you to double the pointer array in the worst case but still it takes constant time in the number of copy constructors called.
// (this case is very very rare that pointer array becomes full)

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq = {10, 20, 30};
    dq.push_front(5);
    dq.push_back(50);
    for (auto x : dq)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << dq.front() << " " << dq.back();
    return 0;
}