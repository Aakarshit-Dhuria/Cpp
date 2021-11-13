//// Insertion at the end of linked list

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

// // time complexity - O(1) // constant operations only
// Node *insertEnd(Node *head, int x) // return type is Node because it adds a Node at the beginning.
// {
//     Node *temp = new Node(x);
//     if (head == NULL)
//         return temp;
//     while (head->next != NULL)
//     {
//         head = head->next;
//     }
//     head->next = temp;
//     return head;
// }

Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
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
    //// One Way
    // Node *head = NULL;
    // head = insertEnd(head, 30);
    // head = insertEnd(head, 20);
    // head = insertEnd(head, 10);

    //// Another way
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);
    head = insertEnd(head, 35);
    printList(head);
    return 0;
}