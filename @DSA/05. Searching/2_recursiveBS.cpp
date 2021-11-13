#include <iostream>
using namespace std;
// time - O(log n)
// aux space - O(log n)
// T(n) = T(n/2) + theta(1)
int recBinarySearch(int arr[], int x, int low, int high)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == x)
    {
        return mid;
    }
    else if (arr[mid] < x)
    {
        return (arr, x, mid + 1, high);
    }
    else if (arr[mid] > x)
    {
        return (arr, x, low, mid - 1);
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 40;
    
    int low = 0, high = n - 1;
    cout << recBinarySearch(arr, x, low, high);
    return 0;
}