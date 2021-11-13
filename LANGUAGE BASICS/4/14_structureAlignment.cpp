//! STRUCTURE ALIGNMENT 
//! All data types (which take more than one byte) except char have alignment requirements.
//! A structure has alignment requirements same as its largest member's requirements.
//! Structure with members in increasing size or decreasing size take the lowest amount of size.
//! Alignment of all datatypes is Machine or Compiler Dependent.

//! note: is an integer takes 4 bytes, it always gonna be stored at an address with last 2 bits 00 (multiple of 4)
//! in case of double,it takes 8 bytes it is tored in a way that address has last 3 bits 000 (multiple of 8)
#include<iostream>
using namespace std;

struct s1{
    char c1;
    double d1;
    char c2;
};

struct s2{
    char c1;
    char c2;
    double d1;
};

struct s3{
    double d1;
    char c1;
    char c2;
};

int main(){
    cout << sizeof(s1) << " " << sizeof(s2) << " " << sizeof(s3) << endl;
    return 0;
}

/*
! REASONS FOR ALIGNMENT:
! --> Physical memory is accessed in the form of a word 
!     i.e 4 bytes in a 32 bit machine and 8 bytes in a 64 bit machine
! --> Without alignment it is inefficient to store variable that span accross multiple words.
! If we remove alignment, then a 64 bit CPU would require two cycles to read d1 in case of s2, it will read 2 bytes of char and 6 bytes of d1 in first cycle and remaining 2 bytes in second cycle.
*/