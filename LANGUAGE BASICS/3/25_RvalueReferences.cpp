//! R VALUE REFERENCES ARE USED TO PASS LITERALS AND RESULTS OF EXPRESSIONS TO FUNCTIONS USING DOUBLE AMPERSAND.

#include<bits/stdc++.h>
using namespace std;

void fun(string &&s){
    s = "Hi" + s;
    cout << s;
}

int main(){
    fun("Aakarshit");
    return 0;
}