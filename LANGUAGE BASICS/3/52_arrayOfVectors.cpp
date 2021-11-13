//! ARRAY OF VECTORS
//! Here we create array of m vectors and each is allocated memory dynamically.
// Disadvantages : Not as cache friendly as simple 2-D arrays
//! Advantages: --> Individual rows are of dynamic sizes (earlier they could have different fixed sizes but here they can have dynamic sizes bcoz they were array here we have vector)
// --> Also these are easy to pass to a function.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m = 3, n = 2;
    vector<int> arr[m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i].push_back(10);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    return 0;
}
