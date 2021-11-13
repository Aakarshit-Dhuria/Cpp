// Worst and Average Case of Sort function - O(n log n)
// Uses IntroSort(Hybrid of Quick Sort, Heap Sort and Insertion Sort)
// Quick sort mainly, incase quick sort fails then heap sort, incase of small arrays - insertion sort

// Sorting is mainly used to sort data in containers which allow random access like array,vectors and deque.

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {10, 20, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n); 
    for (int x : arr)
    {
        cout << x << " ";
    }
    sort(arr, arr + n, greater<int>());
    cout << endl;
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}