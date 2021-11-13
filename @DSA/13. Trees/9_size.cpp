// Size of a Binary Tree
// Total number of nodes in it

// Time : O(n)
// Aux Space : O(h) {h is height}

#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = NULL;
        right = NULL;
    }
};

int size(Node *root)
{
    if (root == NULL)
        return 0;
    return (1 + size(root->left) + size(root->right));
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(8);
    root->left->right = new Node(7);
    root->left->right->left = new Node(9);
    root->left->right->right = new Node(15);
    root->right->right = new Node(6);

    cout << size(root) << " ";
    return 0;
}