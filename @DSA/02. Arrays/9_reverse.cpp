#include <iostream>
using namespace std;

/*
void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - 1 - i]);
    }
}
*/
// Time - O(n)   // Aux Space - O(1)
void reverse(int arr[], int n)
{
    int temp, low = 0, high = n - 1;
    while (low < high)
    {
        temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

int main()
{
    int arr[] = {10, 5, 7, 30, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}