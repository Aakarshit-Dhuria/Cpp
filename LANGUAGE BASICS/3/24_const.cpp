//! Here const keyword is used to pass a string literal to a function

#include<bits/stdc++.h>
using namespace std;

void fun(const string &s){
    // s = "Hi" + s;  //! not possible when using const keyword.
    cout << s;
}

int main(){
    fun("Aakarshit");
    return 0;
}