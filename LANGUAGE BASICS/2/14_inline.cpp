//! INLINE FUNCTIONS
//! In these functions ,a seperate memory is not allocated at function call
//! the actual code of the function is copied into the main function itself to save time and storage.
//! It helps in OPTIMISATION
//! Inline is also better than macro because in marcro there are certain problems like it doesn't check the type,etc.

//! When we define a method inside a class, it is automatically treated as inline suggestion to the compiler.

#include<bits/stdc++.h>
using namespace std;

inline int getMax(int x,int y){
    return (x > y) ? x : y;
} 

int main()
{
    cout << getMax(10, 20);
    return 0;
}