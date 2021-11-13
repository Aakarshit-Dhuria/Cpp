// number of distinct elements in an array

#include <iostream>
#include <unordered_set>
using namespace std;

// NAIVE SOLUTION
// TIME Complexity - O(n^2)
// AUX space - O(1)
int countDist(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            count++;
        }
    }
    return count;
}

// efficient solution
// time - theta(n)
// aux space : O(n)
int countDistinct(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    return s.size();
}
// improved implementation of above
int countDistinctt(int arr[], int n)
{
    unordered_set<int> s(arr, arr + n);
    return s.size();
}
int main()
{
    // int arr[] = {15, 12, 13, 12, 13, 13, 18}; // 4
    // int arr[] = {10, 10, 10};  // 1
    int arr[] = {10, 11, 12}; // 3
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countDist(arr, n) << endl;
    cout << countDistinct(arr, n) << endl;
    return 0;
}