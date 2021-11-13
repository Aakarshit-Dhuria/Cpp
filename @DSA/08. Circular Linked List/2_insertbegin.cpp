//// insert at begin of linked list

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
// time complexity - O(n) where n is number of nodes in linked list
// we can make the complexity O(1) by maintaining a second pointer 'tail' and direcly link it to the new node and we wont need the while loop.
Node *insertatBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        temp->next = temp;
    else
    {
        Node *curr = head;
        while (curr->next != head)
            curr = curr->next;
        curr->next = temp;
        temp->next = head;
    }
    return temp;
}

//// Optimised Solution O(1) time
// we first add the new node after the head at second position then we swap the data of first and second node.
Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int t = temp->data;
        temp->data = head->data;
        head->data = t;
        return head;
    }
}

void printList(Node *head)
{
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
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    head = insertBegin(head, 15);
    printList(head);
    return 0;
}