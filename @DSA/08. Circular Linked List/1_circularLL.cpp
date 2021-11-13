//// Circular Linked List in C++

//// Advantages:
//  1. We can traverse the whole list from any node.
//  2. Implementation of algorithms like round robin.
//  3. We can insert at the beginningg and end by just maintaining one tail reference/pointer.

//// Disadvantages:
// 1. Implementation of operations becomes complex

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

void printList(Node *head) //my implementation
{
    if (head == NULL)
        return;
    cout << head->data << " ";
    Node *curr = head->next;
    while (curr != head)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

// using for loop
void printlist(Node *head)
{
    if (head == NULL)
        return;
    cout << head->data << " ";
    for (Node *p = head->next; p != head; p = p->next)
        cout << p->data << " ";
}

// do while loop
void Printlist(Node *head)
{
    if (head == NULL)
        return;
    Node *p = head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);
    head->next->next->next->next = head;
    // printList(head);
    // printlist(head);
    Printlist(head); 
    return 0;
}