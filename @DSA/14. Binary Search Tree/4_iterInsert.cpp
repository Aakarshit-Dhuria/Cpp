// Iterative insert in a binary search tree
// Time : O(h)
// Aux Space : O(1)
// Therefore iterative is better because it doesnt use any aux space and also doesnt cause recursive call overhead.

#include <iostream>
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

Node *insert(Node *root, int x)
{
    Node *temp = new Node(x);
    Node *parent = NULL, *curr = root;
    while (curr != NULL)
    {
        parent = curr; // we are using a parent pointer to maintain the address of previous node. so that we can connect the new node to it outside the loop after we have found the exact position to insert the new node.
        if (x < curr->key)
            curr = curr->left;
        else if (x > curr->key)
            curr = curr->right;
        else
            return root;
    }
    if (parent == NULL)
        return temp;
    if (parent->key > x)
        parent->left = temp;
    else
        parent->right = temp;
    return root;
}

void inorder(Node *root)
{
    if (root)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node(18);
    root = insert(root, x);
    inorder(root);
    return 0;
}