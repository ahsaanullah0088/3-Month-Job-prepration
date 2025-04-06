// #include <iostream>

// // Define the Node class
// class Node {
// public:
//     char val;
//     Node* left;
//     Node* right;

//     // Constructor
//     Node(char val) {
//         this->val = val;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// };

// int main() {
//     // Create nodes
//     Node* a = new Node('a');
//     Node* b = new Node('b');
//     Node* c = new Node('c');
//     Node* d = new Node('d');
//     Node* e = new Node('e');
//     Node* f = new Node('f');

//     // Build the tree structure
//     a->left = b;
//     a->right = c;
//     b->left = d;
//     b->right = e;
//     c->right = f;

//     // Print a message
//     std::cout << "Try programiz.pro" << std::endl;

//     // Free allocated memory (optional in this case, but good practice)
//     delete a;
//     delete b;
//     delete c;
//     delete d;
//     delete e;
//     delete f;

//     return 0;
// }

// #include <iostream>
// #include <stack>       // For std::stack
// #include <vector>      // For std::vector

// // Define the Node class
// class Node {
// public:
//     char val;
//     Node* left;
//     Node* right;

//     // Constructor
//     Node(char val) {
//         this->val = val;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// };

// // Depth-First Search (DFS) function using a stack
// std::vector<char> DepthFirstValues(Node* root) {
//     std::vector<char> result; // To store the result
//     if (root == nullptr) {
//         return result; // Return empty vector if the tree is empty
//     }

//     std::stack<Node*> stack; // Use a stack for DFS
//     stack.push(root);        // Start with the root node

//     while (!stack.empty()) {
//         Node* current = stack.top(); // Get the top node
//         stack.pop();                 // Remove it from the stack
//         result.push_back(current->val); // Add its value to the result

//         // Push the right child first (so the left child is processed first)
//         if (current->right != nullptr) {
//             stack.push(current->right);
//         }

//         // Push the left child
//         if (current->left != nullptr) {
//             stack.push(current->left);
//         }
//     }

//     return result; // Return the result
// }

// int main() {
//     // Create nodes
//     Node* a = new Node('a');
//     Node* b = new Node('b');
//     Node* c = new Node('c');
//     Node* d = new Node('d');
//     Node* e = new Node('e');
//     Node* f = new Node('f');

//     // Build the tree structure
//     a->left = b;
//     a->right = c;
//     b->left = d;
//     b->right = e;
//     c->right = f;

//     // Perform DFS and get the result
//     std::vector<char> dfsResult = DepthFirstValues(a);

//     // Print the result
//     std::cout << "DFS Result: ";
//     for (char val : dfsResult) {
//         std::cout << val << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

/// another sollution for depth first solltion 

//  const depthfirstvalues = (root) =>{
//     if (root === NULL) return [];
//      const leftvalues = depthfirstvalues(root.left);
//      const rightvalues = depthfirstvalues(root.right);
//      return [root.val, ...leftvalues, ...rightvalues];

//  }
//  const peeps = ['a', 'b', 'c', 'd', 'e', 'f'];
//  const newpeeps = ['alvin', ...peeps, 'g'];
//  console.log(newpeeps);


/// breath first search sollution
// #include <iostream>
// #include <queue>       // For std::queue
// #include <vector>      // For std::vector

// // Define the Node class

// class Node {
//     public 
//     char val;
//     Node*left;
//     Node*right;
//     Node(char val){
//         this->val = val;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// }
// class Node {
// public:
//     char val;
//     Node* left;
//     Node* right;

//     // Constructor
//     Node(char val) {
//         this->val = val;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// };

// // Breadth-First Search (BFS) function
// std::vector<char> BreadthFirstValues(Node* root) {
//     std::vector<char> values; // To store the result
//     if (root == nullptr) {
//         return values; // Return empty vector if the tree is empty
//     } 

//     std::queue<Node*> queue; // Use a queue for BFS
//     queue.push(root);        // Start with the root node

//     while (!queue.empty()) {
//         Node* current = queue.front(); // Get the front node
//         queue.pop();                   // Remove it from the queue
//         values.push_back(current->val); // Add its value to the result

//         // Add the left child to the queue if it exists
//         if (current->left != nullptr) {
//             queue.push(current->left);
//         }

//         // Add the right child to the queue if it exists
//         if (current->right != nullptr) {
//             queue.push(current->right);
//         }
//     }
//     vector<char>bfs(node *root){
//         vector<char> values;
//         if(root == NULL){
//             return values;
//         }
//         queue<node*> q;
//         q.push(root);
//         while(!q == empty){
//             node*current = q.front();
//             q.pop();
//             values.push_back(current->val);
//             if(current->left != NULL){
//                 q.push(current->left);
//             }
//             if(current->right != NULL){
//                 q.push(current->right);
//             }
//         }
//     };


//     return values; // Return the result
// }

// int main() {
//     // Create nodes
//     Node* a = new Node('a');
//     Node* b = new Node('b');
//     Node* c = new Node('c');
//     Node* d = new Node('d');
//     Node* e = new Node('e');
//     Node* f = new Node('f');

//     // Build the tree structure
//     a->left = b;
//     a->right = c;
//     b->left = d;
//     b->right = e;
//     c->right = f;

//     // Perform BFS and get the result
//     std::vector<char> bfsResult = BreadthFirstValues(a);

//     // Print the result
//     std::cout << "BFS Result: ";
//     for (char val : bfsResult) {
//         std::cout << val << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }
// // binary tree: 
// // A tree in which each node can have at most two children is called a binary tree.
// // A binary tree has the benefits of both an ordered array and a linked list as search is as quick as in a sorted array and insertion or deletion operation are as fast as in linked list.
// // atmost 2 childrens 
// // exactly one root 
// // exaclty one path from root to any node


// // Trees 
// // A tree is a non-linear data structure that is used to store data in a hierarchical manner. It is a collection of nodes connected by some edges.
// // The topmost node is called the root of the tree. The elements that are directly under an element are called its children. The element directly above something is called its parent. For example, 'a' is a child of 'f', and 'f' is the parent of 'a'. Finally, elements with no children are called leaves.
// // A tree is a collection of nodes connected by directed (or undirected) edges. A tree is a nonlinear data structure, compared to arrays, linked lists, stacks, and queues which are linear data structures. A tree can be empty with no nodes or a tree is a structure consisting of one node called the root and zero or one or more subtrees.

// // leaf node : A node with no children is called a leaf node.

// // depth first search : 
// // In depth-first search, the nodes are explored depth-wise. In other words, we explore as far as possible along each branch before backtracking. Depth-first search is a recursive algorithm that uses the idea of backtracking. It involves exhaustive searches of all the nodes by going ahead, if possible, else by backtracking.

// // first form node to left child than left child to left child and so on if there is no child left than go to right child and do the same
// // than go to right child and do the same


// Breadth first search : 
// In breadth-first search, the nodes are explored breadth-wise. In other words, we explore all the neighbor nodes at the present depth prior to moving on to the nodes at the next depth level. Breadth-first search is a queue-based algorithm. It involves searching all the nodes at a given depth before moving on to the nodes at the next depth level.

// #include <iostream>
// #include <queue>       // For std::queue
// #include <vector>      // For std::vector

// class Node {
//     public : 
//     char val;
//     Node*left ;
//     Node*right;
//     Node(char val){ // constructor 
//         this->val = val;
//         this->left = NULL;
//         this->right - N ULL;
//     }
// }

 
//     int main(){
//         Node * a = new Node('a');
//         Node * b = new Node('b');
//         Node * c = new Node('c');
//         Node * d = new Node('d');
//         Node * e = new Node('e');
//         Node * f = new Node('f');

//         a->left = b;
//         a->right = c;
//         b->left = d;
//         b->right = e;
//         c->right = f;


//     }


// trees implementation step by step 

#include<iostream>
#include<queue>
using namespace std;

class Node{
    public: 
    int data ; 
    Node* left , *right;
    Node(int value){
        data = value;
        left = right = NULL;
    }
};
int main(){
    int x; 
    cout<<"Enter the root element";
    int first , second;
    queue <Node*>q;
    Node*root = new Node(x);
    q.push(root);
    while(!q.empty()){
        Node*temp = q.front();
        q.pop();
        cin>>first;
        
    }
}