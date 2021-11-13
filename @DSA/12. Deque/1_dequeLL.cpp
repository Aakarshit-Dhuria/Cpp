// We use doubly linked list with front and rear pointers
// with singly linked list although insertion at front and rear is possible in O(1) time but deletion is not possible in O(1) time therefore we use doubly linked list.

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
}

int
main()
{

    return 0;
}