// Bug Hunt: Balanced Binary Search Tree (BST) Insertion
// Difficulty: Third Year - Hard
// Description: Insert element in BST maintaining balance

#include <iostream>
#include <algorithm>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    int height;

    Node(int val) : data(val), left(nullptr), right(nullptr), height(1) {}
};

int getHeight(Node *node)
{
    return (node == nullptr) ? 0 : node->height;
}

int getBalance(Node *node)
{
    return (node == nullptr) ? 0 : getHeight(node->left) - getHeight(node->right);
}

Node *insert(Node *node, int data)
{
    if (node == nullptr)
    {
        return new Node(data);
    }

    if (data < node->data)
    {
        node->left = insert(node->left, data);
    }
    else if (data > node->data)
    {
        node->right = insert(node->right, data);
    }
    else
    {
        return node; // Duplicate
    }

    int balance = getBalance(node);

    return node;
}

int main()
{
    Node *root = nullptr;
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 2);
    root = insert(root, 7);

    cout << "Root: " << root->data << endl; // Expected: 5 (balanced)

    return 0;
}
