//// Recursive Display of Linked List

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
// Time Complexity - O(n)
// Aux Space - O(n)   // n+1 recursive calls
void rPrintList(Node *head)
{
    if (head == NULL)
        return;
    cout << head->data << " ";
    rPrintList(head->next);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    rPrintList(head);
    return 0;
}