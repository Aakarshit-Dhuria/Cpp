#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 40, 30};
    for(int &x : arr){
        x = x * 2;
        cout << x << " ";
    }
    return 0;
}