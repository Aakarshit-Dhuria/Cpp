// Searching in an unsorted array and returning index of first occurence

#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
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

int main()
{
    int arr[] = {10, 15, 20, 30, 40};
    cout << search(arr, 5, 20);
    return 0;
}