// C-style string
// Character array with \0 as last character
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s1[] = "gfg";
    char s2[] = {'c', 'p', 'p','\0'};
    cout << strlen(s1) << "\n";
    cout << strlen(s2) << "\n";
    return 0;
}