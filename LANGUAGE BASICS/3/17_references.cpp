//! Reference Variables are used to avoid copying of large objects in for each loop

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> vect{"geeksforgeeks practice", "geeksforgeeks ide", "geeksforgeeks write"};

    // ! here also &x is used to save time and memory of copying the long strings into the loop instead the original strings of the vector are used
    //! also const keyword is used to avoid accidental modifications to the code as we only have to print the strings in this case.
    
    for (const auto &x : vect)
    {
        cout << x << " ";
    }
}