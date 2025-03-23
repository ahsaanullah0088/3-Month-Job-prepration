// binary tree
// Binary tree is a tree data structure in which each node has at most two children, referred to as the left child and the right child.
// The topmost node in a binary tree is called the root node.

// Node : A node is a basic unit of a data structure, such as a linked list or tree data structure. Each node contains data and may link to other nodes.
// Root : The top node of a tree is called the root node. It is the only node in the tree that has no parent. The root node is the starting point for traversing the tree and accessing its data.
// parent : A parent node is a node that has one or more child nodes. In a binary tree, each node can have at most two children, which are referred to as the left child and the right child. The parent node is the node that is one level higher in the tree hierarchy than its child nodes.
// child : A child node is a node that is one level lower in the tree hierarchy than its parent node. In a binary tree, each node can have at most two children, which are referred to as the left child and the right child. The child node is the node that is directly connected to its parent node.
// leaf : A leaf node is a node that has no children. In a binary tree, a leaf node is a node that is at the bottom of the tree and does not have any child nodes. Leaf nodes are also referred to as terminal nodes or external nodes.
// Anscestor : An ancestor of a node is any node that is on the path from the root to that node. In other words, an ancestor is a node that is higher up in the tree hierarchy than the given node. The root node is considered an ancestor of all nodes in the tree, and each node has one or more ancestors, depending on its position in the tree.
// Descendant : A descendant of a node is any node that is on the path from that node to a leaf node. In other words, a descendant is a node that is lower down in the tree hierarchy than the given node. Each node has one or more descendants, depending on its position in the tree. Leaf nodes have no descendants, while the root node has all other nodes in the tree as its descendants.
// level : The level of a node in a tree is the number of edges on the path from the root node to that node. The root node is at level 0, its children are at level 1, and so on. The level of a node can be used to determine its position in the tree hierarchy and to perform operations such as searching or traversing the tree.
// sibling : Siblings are nodes that share the same parent node. In a binary tree, each node can have at most two children, which are referred to as the left child and the right child. If two nodes have the same parent node, they are considered siblings. Sibling nodes are at the same level in the tree hierarchy and can be used to perform operations such as traversing or searching the tree.
// height : The height of a binary tree is the length of the longest path from the root node to a leaf node. In other words, it is the number of edges on the longest path from the root to any leaf node in the tree. The height of a binary tree can be used to determine its balance and efficiency for searching and traversing operations. A balanced binary tree has a height that is logarithmic in relation to the number of nodes in the tree, while an unbalanced binary tree can have a height that is linear in relation to the number of nodes.

// degree : The degree of a node in a tree is the number of children that the node has. In a binary tree, each node can have at most two children, so the degree of a node can be 0, 1, or 2. A node with no children has a degree of 0 and is called a leaf node. A node with one child has a degree of 1, and a node with two children has a degree of 2. The degree of a node can be used to determine its position in the tree hierarchy and to perform operations such as searching or traversing the tree.
// edges : An edge in a tree is a connection between two nodes. In a binary tree, each node can have at most two children, which are connected to the parent node by edges. The edges in a binary tree can be used to traverse the tree and access its data. The number of edges in a binary tree is equal to the number of nodes minus one, since there is one edge connecting each node to its parent node, except for the root node, which has no parent.

// if there is n nodes 
// // Edges will be n-1;
// The first node in a tree is called the root node.

// A link connecting one node to another is called an edge.

// A parent node has links to its child nodes. Another word for a parent node is internal node.

// A node can have zero, one, or many child nodes.

// A node can only have one parent node.

// Nodes without links to other child nodes are called leaves, or leaf nodes.

// The tree height is the maximum number of edges from the root node to a leaf node. The height of the tree above is 2.

// The height of a node is the maximum number of edges between the node and a leaf node.

// The tree size is the number of nodes in the tree.


// Algorithms like traversing, searching, insertion and deletion become easier to understand, to implement, and run faster.
// Keeping data sorted in a Binary Search Tree (BST) makes searching very efficient.
// Balancing trees is easier to do with a limited number of child nodes, using an AVL Binary Tree for example.
// Binary Trees can be represented as arrays, making the tree more memory efficient.

// Binary Trees vs Arrays and Linked Lists
// Benefits of Binary Trees over Arrays and Linked Lists:

// Arrays are fast when you want to access an element directly, like element number 700 in an array of 1000 elements for example. But inserting and deleting elements require other elements to shift in memory to make place for the new element, or to take the deleted elements place, and that is time consuming.
// Linked Lists are fast when inserting or deleting nodes, no memory shifting needed, but to access an element inside the list, the list must be traversed, and that takes time.
// Binary Trees, such as Binary Search Trees and AVL Trees, are great compared to Arrays and Linked Lists because they are BOTH fast at accessing a node, AND fast when it comes to deleting or inserting a node, with no shifts in memory needed.
// We will take a closer look at how Binary Search Trees (BSTs) and AVL Trees work on the next two pages, but first let's look at how a Binary Tree can be implemented, and how it can be traversed.

// Types of binary trees
// A balanced Binary Tree has at most 1 in difference between its left and right subtree heights, for each node in the tree.

// A complete Binary Tree has all levels full of nodes, except the last level, which is can also be full, or filled from left to right. The properties of a complete Binary Tree means it is also balanced.

// A full Binary Tree is a kind of tree where each node has either 0 or 2 child nodes.

// A perfect Binary Tree has all leaf nodes on the same level, which means that all levels are full of nodes, and all internal nodes have two child nodes.The properties of a perfect Binary Tree means it is also full, balanced, and complete.

// Binary tree 
// #include <iostream>
// using namespace std;

// class TreeNode {
// public:
//     char data;
//     TreeNode* left;
//     TreeNode* right;

//     TreeNode(char data) {
//         this->data = data;
//         left = nullptr;
//         right = nullptr;
//     }
// };

// int main() {
//     // Create nodes
//     TreeNode* root  =  new TreeNode('R');
//     TreeNode* nodeA = new TreeNode('A');
//     TreeNode* nodeB = new TreeNode('B');
//     TreeNode* nodeC = new TreeNode('C');
//     TreeNode* nodeD = new TreeNode('D');
//     TreeNode* nodeE = new TreeNode('E');
//     TreeNode* nodeF = new TreeNode('F');
//     TreeNode* nodeG = new TreeNode('G');

//     // Build the tree
//     root->left = nodeA;
//     root->right = nodeB;

//     nodeA->left = nodeC;
//     nodeA->right = nodeD;

//     nodeB->left = nodeE;
//     nodeB->right = nodeF;

//     nodeF->left = nodeG;

//     // Test
//     cout << "root->right->left->data: " << root->right->left->data << endl;



//     return 0;
// }


// #include<iostream>
// using namespace std;
// class TreeNode{
//     public :
//     char data;
//     TreeNode* left;
//     TreeNode* right;

//     TreeNode(char data){
//         this->data = data;
//         left = NULL;
//         right = NULL;
//     }
// };
// // Function to create a new node
// int main(){
//     TreeNode* root = new TreeNode('A');
//     root->left = new TreeNode('B');
//     root->right = new TreeNode('C');
//     root->left->left = new TreeNode('D');
//     root->left->right = new TreeNode('E');
//     root->right->left = new TreeNode('F');
//     root->right->right = new TreeNode('G');

//     cout << "Root: " << root->data << endl;
//     cout << "Left child of root: " << root->left->data << endl;
//     cout << "Right child of root: " << root->right->data << endl;
//     cout << "Left child of left child of root: " << root->left->left->data << endl;
//     cout << "Right child of left child of root: " << root->left->right->data << endl;
//     cout << "Left child of right child of root: " << root->right->left->data << endl;
//     cout << "Right child of right child of root: " << root->right->right->data << endl;
    
// }


