// Height of Binary Tree is the number of nodes between the longest path from root to leaf node(including the root and leaf node)

// Time Complexity : O(n) {n recursive calls which take constant time}
// Auxillary Space : O(h) {max h+1 calls at a single time in worst case (h is height of )}

// iterative solution : https://www.geeksforgeeks.org/iterative-method-to-find-height-of-binary-tree/

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

int height(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return (1 + max(height(root->left), height(root->right)));
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    cout << height(root) << endl;
    return 0;
}