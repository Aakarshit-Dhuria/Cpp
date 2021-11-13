// Remove duplicates from a sorted array

#include <iostream>
using namespace std;

// NAIVE APPROACH
// Time Complexity : O(n) or theta(n)
// Auxillary Space : O(n) or theta(n)
/* int removeDup(int arr[], int n)
{
    int temp[n];
    temp[0] = arr[0];
    int size = 1;
    for (int i = 1; i < n; i++)
    {
        if (temp[size - 1] != arr[i])
        {
            temp[size] = arr[i];
            size++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
    return size;
}
*/
// time - O(n)  // auxillary space - O(1)
int removeDup(int arr[], int n) 
{
    int size = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[size - 1])
        {
            arr[size] = arr[i];
            size++;
        }
    }
    return size;
}

int main()
{
    int arr[] = {10, 20, 20, 30, 30, 30, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int size = removeDup(arr, n);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}