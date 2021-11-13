// in binary search we return index of any occurence of that number
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
// time - O(log n)  (cieling of log n iterations // constant work in each iteration)
// in case of unsuccessful search , time is exactly theta(log n)  (can also be written as O(log n))
// Aux space - O(1) 
int binarySearch(int arr[], int n, int x)
{
    int start = 0, last = n - 1;
    while (start <= last)
    {
        int mid = (start + last) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] > x)
        {
            last = mid - 1;
        }
        if (arr[mid] < x)
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cin >> x;
    cout << linearSearch(arr, n, x) << endl;
    cout << binarySearch(arr, n, x) << endl;
    return 0;
}