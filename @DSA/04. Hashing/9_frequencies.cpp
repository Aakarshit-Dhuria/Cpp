// Frequency of elements in an array

#include <iostream>
#include <unordered_map>
using namespace std;

// Naive Solution
// Time : O(n^2)
// Aux Space : O(1)
void printfreq(int arr[], int n)
{
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
        if (flag == true)
        {
            continue;
        }
        int freq = 1;
        for (int j = 0; j < i + 1; j++)
        {
            if (arr[i] == arr[j])
                freq++;
        }
        cout << arr[i] << " " << freq << endl;
    }
}

void frequency(int arr[], int n)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        if (m.find(arr[i]) != m.end())
        {
            m[arr[i]] = m[arr[i]] + 1;
        }
        else
        {
            m[arr[i]] = 1;
        }
    }
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
}

void printFreq(int arr[], int n)
{
    unordered_map<int, int> m;
    for (auto x : arr)
    {
        m[x]++; // hash map by default assigns value 0  to new key
    }
    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }
}

int main()
{
    int arr[] = {10, 12, 10, 15, 10, 20, 12, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    frequency(arr, n);
    printFreq(arr, n);
    return 0;
}