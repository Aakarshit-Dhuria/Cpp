//! POINTER ARITHMETIC'
//! Allowed operations: ptr++ , ++ptr , ptr-- , --ptr , ptr+int,ptr-int,ptr1-ptr2

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr; // stores the address of first element of array
    cout << *ptr << " " << ptr << endl;
    ptr++;
    cout << *ptr << " " << ptr << endl;
    ptr--;
    cout << *ptr << " " << ptr << endl;
    ptr = ptr + 3;
    cout << *ptr << " " << ptr << endl;
    ptr = ptr - 2;
    cout << *ptr << " " << ptr << endl;
    
    
    int *ptr1 = arr;
    cout << *ptr1 << " " << ptr1 << endl;
    int *ptr2 = ptr1 + 3;
    cout << *ptr2 << " " << ptr2 << endl;
    cout << (ptr1 - ptr2) << "\n";
    //! it gives number of objects between the two pointers.
    return 0;
}