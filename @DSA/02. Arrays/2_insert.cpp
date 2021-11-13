#include <iostream>
using namespace std;

// Time Complexity - O(n)   //generally
// Time to insert at end : O(1)
// Time to insert at beginning : $(n)  (theta)
int insert(int arr[], int n, int x, int cap, int pos)
{
    if (n == cap)
    {
        return n;
    }
    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i++)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;
    return (n + 1);
}

int main()
{
    int arr[20] = {3, 8, 12, 5, 6};
    int n = insert(arr, 5, 10, 20, 3);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}