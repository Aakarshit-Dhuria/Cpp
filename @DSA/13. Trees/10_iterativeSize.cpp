// Iteratively calculate size of Binary Tree
// we use the idea of level order traversal.
// Time : O(n)
// Aux Space : O(w)  {width of binary tree}
#include <iostream>
#include <queue>
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

int sizeofTree(Node *root)
{
    if (root == NULL)
        return 0;
    queue<Node *> q;
    int count = 1;
    q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        if (curr->left)
        {
            q.push(curr->left);
            count++;
        }
        if (curr->right)
        {
            q.push(curr->right);
            count++;
        }
        q.pop();
    }
    return count;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Size of the tree is " << sizeofTree(root) << endl;

    return 0;
}