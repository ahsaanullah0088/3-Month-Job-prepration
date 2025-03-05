#include <iostream>

// Define the Node class
class Node {
public:
    char val;
    Node* left;
    Node* right;

    // Constructor
    Node(char val) {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

int main() {
    // Create nodes
    Node* a = new Node('a');
    Node* b = new Node('b');
    Node* c = new Node('c');
    Node* d = new Node('d');
    Node* e = new Node('e');
    Node* f = new Node('f');

    // Build the tree structure
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;

    // Print a message
    std::cout << "Try programiz.pro" << std::endl;

    // Free allocated memory (optional in this case, but good practice)
    delete a;
    delete b;
    delete c;
    delete d;
    delete e;
    delete f;

    return 0;
}

// binary tree: 
// A tree in which each node can have at most two children is called a binary tree.
// A binary tree has the benefits of both an ordered array and a linked list as search is as quick as in a sorted array and insertion or deletion operation are as fast as in linked list.
// atmost 2 childrens 
// exactly one root 
// exaclty one path from root to any node


// Trees 
// A tree is a non-linear data structure that is used to store data in a hierarchical manner. It is a collection of nodes connected by some edges.
// The topmost node is called the root of the tree. The elements that are directly under an element are called its children. The element directly above something is called its parent. For example, 'a' is a child of 'f', and 'f' is the parent of 'a'. Finally, elements with no children are called leaves.
// A tree is a collection of nodes connected by directed (or undirected) edges. A tree is a nonlinear data structure, compared to arrays, linked lists, stacks, and queues which are linear data structures. A tree can be empty with no nodes or a tree is a structure consisting of one node called the root and zero or one or more subtrees.

// leaf node : A node with no children is called a leaf node.

// depth first search : 
// In depth-first search, the nodes are explored depth-wise. In other words, we explore as far as possible along each branch before backtracking. Depth-first search is a recursive algorithm that uses the idea of backtracking. It involves exhaustive searches of all the nodes by going ahead, if possible, else by backtracking.

// first form node to left child than left child to left child and so on if there is no child left than go to right child and do the same
// than go to right child and do the same
