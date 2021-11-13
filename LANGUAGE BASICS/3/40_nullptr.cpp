// nullptr is added as a replacement to NULL because as NULL is defined as 0 therefore it can also be assigned to an integer
// int x = NULL is allowed
// int x = nullptr is not allowed
// The type of  null ptr is nullptr_t.

// NULL can always be used except in a few exception cases l;
ike where there is function overloading

#include<iostream>
using namespace std;

void fun(int x){

}

void fun(int *ptr){

}
//! Here we have function overloading as null is defined as 0 and aslo it is a pointer so it will give compiler error.
int main(){
    fun(NULL);
    return 0;
}