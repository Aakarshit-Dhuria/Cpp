//// Remove duplicates from a sorted list

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
void printList(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void removeDuplicates(Node *head)
{
    for (Node *curr = head; curr != NULL and curr->next != NULL; curr = curr->next)
    {
        if (curr->data == curr->next->data)
        {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete (temp);
        }
    }
}

void removeDup(Node *head)
{
    Node *curr = head;
    while (curr != NULL and curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete (temp);
        }
        else
        {
            curr = curr->next;
        }
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next = new Node(20);
    head->next->next = new Node(20);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(30);
    head->next->next->next->next->next = new Node(30);
    printList(head);
    // removeDuplicates(head);
    removeDup(head);
    printList(head);
    return 0;
}