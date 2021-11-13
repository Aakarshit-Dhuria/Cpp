// Index of largest element in an array

#include <iostream>
using namespace std;

// Time COmplexity - theta(n)
int largest(int arr[], int n)
{
    // int max = arr[0];
    int maxInd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[maxInd])
        {
            // max = arr[i];
            maxInd = i;
        }
    }
    return maxInd;
}

int main()
{
    // int arr[] = {10, 5, 20, 8};
    int arr[] = {40, 8, 50, 100}; 
    cout << largest(arr, 4);
    return 0;
}