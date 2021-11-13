//// Insert at the beginning of a Linked List

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

// time complexity - O(1) // constant operations only
Node *insertBegin(Node *head, int x)  // return type is Node because it adds a Node at the beginning.
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
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
    // head = insertBegin(head, 30);
    // head = insertBegin(head, 20);
    // head = insertBegin(head, 10);

    //// Another way
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);
    head = insertBegin(head, 35);
    printList(head);
    return 0;
}