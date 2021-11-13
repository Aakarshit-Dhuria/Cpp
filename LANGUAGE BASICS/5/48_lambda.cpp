// find_if

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{100, 20, 4, 200, 1};
    auto it = find_if(v.begin(), v.end(), [](int x)
                      { return x < 10; });
    cout << *it;
    // value at address it
    return 0;
}