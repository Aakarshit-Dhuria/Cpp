// accumulate()

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    vector<int> v{10, 2, 4, 20, 1};
    int res = accumulate(v.begin(), v.end(),0);
    // accumulate function by default does sum of the elements
    cout << res << " ";
    res = accumulate(v.begin(), v.end(), 1, [](int x, int y)
                     { return x * y; });
    cout << res;
    return 0;
}