#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int fact = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     fact = fact * i;
    // }
    while (n > 0)
    {
        fact = fact * n;
        n--;
    }
    
    cout << fact;
    return 0;
}