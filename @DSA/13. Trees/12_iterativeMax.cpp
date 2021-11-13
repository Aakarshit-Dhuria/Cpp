// Largest value in each level (iterative using queue)
// Based on level order traversal.
// Time : O(n)
// Aux Space : O(w)

// Advantage: it doesnt require recursion call overhead.

#include <iostream>
#include <queue>
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

void getMax(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    int nc, max; // {nc : node count}
    q.push(root);
    while (1)
    {
        nc = q.size(); // node count for current level
        if (nc == 0)
            break;
        max = INT_MIN;
        while (nc--)
        {
            Node *curr = q.front();
            q.pop();
            if (max < curr->key)
                max = curr->key;
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
        cout << max << " ";
    }
}

int main()
{

    return 0;
}