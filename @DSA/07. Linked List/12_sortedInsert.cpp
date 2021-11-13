// Sorted Insert in a Linked List

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
// time - theta(pos)
Node *sortedInsert(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }
    if (x < head->data)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    while (curr->next->data <= x && curr->next  != NULL)
    { 
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
}

void printList(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printList(head);
    sortedInsert(head, 25);
    printList(head);
    return 0;
}