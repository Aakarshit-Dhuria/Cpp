// Move all zeroes to end

#include <iostream>
using namespace std;
/*
Time complexity : O(n)
void move(int arr[], int n)
{
    int zeroes = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
}
*/

void move(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main()
{
    int arr[] = {8, 5, 0, 10, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    move(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}