//! Modifications in for each loop

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vect{10, 20, 30, 40};
    //! &x is used to make modifications to the original vector
    //! if we dont use & then this for each loop wont make any modifications to the original vector.
    for(auto &x : vect){
        x = x + 5;
    }
    for(auto x : vect){
        cout << x << " ";   
    }
}