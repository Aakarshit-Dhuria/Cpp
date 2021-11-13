//// LINKED LIST

// Linear
// Stores data in sequential order
// Non contiguous

// Advantages :
//      1. The idea is to drop the contagious memory requirements so that insertions, deletions can efficiently happen at the middle also.
//      2. No need to pre allocate the space (no extra nodes).

// Note : We represent linked list with a pointer to the first node i.e. by address of first node(head)

#include <iostream>
using namespace std;

struct Node

    int data;
    Node *next; // structures with items with data type of same structure are called self-referential structures. // we make this because we have to store the address of next node in this and the next node is going to be of the same data type
    Node(int x) // we can also use a seperate function for this purpose but it is good to use a constructor
    {
        data = x;
        next = NULL;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;

    // Short implementation
    Node *head = new Node(10);
    cout << head->data << " ";
    head->next = new Node(20);
    head->next->next = new node(30);
    return 0;
}
