// direct address table  (using array)
// here the keys are indexes of array. 
// we use a boolean array.
// then we can do search , delete and insert in O(1) time.
// problems with this kind of tables:
// 1. Cant handle large values
// 2. can have floating point,strings or addresses as keys.

#include <iostream>
using namespace std;

void insert(bool table[], int i)
{
    table[i] = 1;
}

int search(bool table[], int i)
{
    return table[i];
}

void deletei(bool table[], int i)
{
    table[i] = 0;
}

int main()
{
    bool table[1000] = {0};
    // insert(10):
    insert(table, 10);
    // insert(20):
    insert(table, 20);
    // insert(119):
    insert(table, 119);
    // search(10):
    cout << search(table, 10) << endl;
    // search(20):
    cout << search(table, 20) << endl;
    // delete(119):
    deletei(table, 119);
    //search(119):
    cout << search(table, 119) << endl;
    return 0;
}