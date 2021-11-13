#include<bits/stdc++.h>
using namespace std;


int main(){
    int i = 0;
    int n;
    cin >> n;
    while (n > 0)
    {
        n /= 10;
        i++;
    }
    cout << i;
    return 0;
}