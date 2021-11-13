// Exception Handling in C++
// Common Exceptions:
// 1. Divide by zero
// 2. No heap memory available
// 3. Accessing array elements outside the allowed index range
// 4. Pop from an empty stack

#include<iostream>
using namespace std;

int average(int arr[],int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int res = sum / n;
    return res;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << average(arr, n);
}