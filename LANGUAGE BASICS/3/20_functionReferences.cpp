//! PASS BY REFERENCE TO FUNCTION

#include<bits/stdc++.h>
using namespace std;

void fun(int &x){
    x = x + 5;
}
//! Here if we use pass by value changes would not be reflected in the main function.
int main(){
    int x = 10;
    fun(x);
    cout << x;
    return 0;
}