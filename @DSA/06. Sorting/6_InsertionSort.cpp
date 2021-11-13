// Insertion Sort
// Time - O(n^2)
// In- Place and Stable
// Used in practice for small arrays(TimSort and IntroSort)
// -->  theta(n) in Best Case(already sorted) and 
// --> theta(n^2) in worst case(reverse sorted)

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 and arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}