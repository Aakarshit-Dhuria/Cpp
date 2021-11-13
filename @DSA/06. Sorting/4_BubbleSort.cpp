// Time - O(n^2)
// Bubble sort is a stable sorting algorithm as it never changes the order of elements if they have the same value. and keeps them in place as it doesnt copy to any other array

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// We can optimise this bubble sort for special cases like when array is already sorted or it gets sorted in the middle
// so in this below optimised bubble sort, if the array is sorted it only takes O(n) time
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true
            }
        }
        if (not swapped)
        {
            break;
        }
    }
}