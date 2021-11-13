// SPace Optimised Preorder
// Time : O(n)
// Space : O(h)
#include <iostream>
#include <stack>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

void preorder(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> s;
    Node *curr = root;
    while (curr != NULL or !s.empty())
    {
        while (curr != NULL)
        {
            cout << curr->key << " ";
            if (curr->right)
                s.push(curr->right);
            curr = curr->left;
        }
        if (!s.empty())
        {
            curr = s.top();
            s.pop();
        }
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->left->left = new Node(80);
    root->left->left->right = new Node(90);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    preorder(root);
    return 0;
}