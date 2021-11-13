// Index of second largest element

#include <iostream>
using namespace std;

// time complexity - theta(n)  // auxillary space - theta(1)
int secLar(int arr[], int n)
{
    int max = 0;
    int secMax = -1;
    for (int i = 1; i < n; i++)
    {

        if (arr[i] > arr[max])
        {
            secMax = max;
            max = i;
        }
        else if (arr[i] != arr[max])
        {
            if (secMax == -1 or arr[i] > arr[secMax])
            {
                secMax = i;
            }
        }
    }
    return secMax;
}

int main()
{
    // int arr[] = {10, 5, 8, 12};  // 0
    // int arr[] = {20, 10, 20, 8, 12};  // 4
    // int arr[] = {10, 10, 10};   // -1
    int arr[] = {5, 20, 12, 20, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ind = secLar(arr, n);
    cout << ind;
    return 0;
}