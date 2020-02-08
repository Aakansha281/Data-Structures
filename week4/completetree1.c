/* C program to checks if a binary tree complete ot not  for tree 1*/
#include<stdio.h> 
#include<stdlib.h> 
#include<stdbool.h> 

struct Node 
{ 
    int key; 
    struct Node *left, *right; 
}; 

struct Node *newNode(char k) 
{ 
    struct Node *node = (struct Node*)malloc(sizeof(struct Node)); 
    node->key = k; 
    node->right = node->left = NULL; 
    return node; 
} 

{ 
    if (root == NULL) 
        return (0); 
    return (1 + countNodes(root->left) + countNodes(root->right)); 
} 
  

bool isComplete (struct Node* root, unsigned int index, 
                 unsigned int number_nodes) 
{ 
    // An empty tree is complete 
    if (root == NULL) 
        return (true); 
  
  
    if (index >= number_nodes) 
        return (false); 
  
   1, number_nodes) && 
            isComplete(root->right, 2*index + 2, number_nodes)); 
} 
  
// Driver program 
int main() 
{ 
    // Le us create tree in the last diagram above 
    struct Node* root = newNode(1); 
     root->left             = newNode(2); 
     root->right           = newNode(3); 
     root->left->left     = newNode(4); 
     root->left->right   = newNode(5); 
     root->left->right->left= newNode(7);
     root->left->right->right = newNode(8);
     root->right->right = newNode(6); 
  
    unsigned int node_count = countNodes(root); 
    unsigned int index = 0; 
  
    if (isComplete(root, index, node_count)) 
        printf("The Binary Tree is complete\n"); 
    else
        printf("The Binary Tree is not complete\n"); 
    return (0); 
}