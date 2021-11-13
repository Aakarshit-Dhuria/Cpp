// Change the case of character entered

#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch1 = 'p', ch2 = 'P';

    cout << "Character p changed to " << (char)((ch1 >= 'a' and ch1 <= 'z')) ? (ch1 - 'a' + 'A') : (ch1 - 'A' + 'a');
    cout << "Character P changed to " << (char)((ch2 >= 'a' and ch1 <= 'z')) ? (ch1 - 'a' + 'A') : (ch1 - 'A' + 'a');
    return 0;
}