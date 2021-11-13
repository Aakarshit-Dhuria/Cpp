//// nth node from the end (using length of linked list)

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
// time complexity- O(n)
void printNodeFromEnd(Node *head, int n)
{
    int len = 0;
    Node *curr = head;
    while (curr != NULL)
    {
        len++;
        curr = curr->next;
    }
    if (len < n)
    {
        return;
    }
    curr = head;
    for (int i = 1; i < len - n + 1; i++)
    {
        curr = curr->next;
    }
    cout << curr->data << " ";
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
    head->next->next->next->next = new Node(50);
    printList(head);
    printNodeFromEnd(head, 2);
    return 0;
}