//! Saving time and memory by avoiding copy of large objects during function calls

#include<bits/stdc++.h>
using namespace std;
//! & v is used to avoid making copy of such a big vector which saves memory and time during execution
//! const keyword is used so that we dont accidentally modify any value of the vector 
void print(const vector<int>&v){
    for(auto x : v){
        cout << x << " ";
    }
}

int main()
{
    vector<int> v;
    for (int i = 0; i < 1000; i++)
    {
        v.push_back(i);
    }
    print(v);
}