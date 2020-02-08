// C program for different tree traversals for tree1 
#include <stdio.h> 
#include <stdlib.h> 

struct node 
{ 
     int data; 
     struct node* left; 
     struct node* right; 
}; 
  

struct node* newNode(int data) 
{ 
     struct node* node = (struct node*) 
                                  malloc(sizeof(struct node)); 
     node->data = data; 
     node->left = NULL; 
     node->right = NULL; 
  
     return(node); 
} 
  

void printPostorder(struct node* node) 
{ 
     if (node == NULL) 
        return; 
  
     // first recur on left subtree 
     printPostorder(node->left); 
  
     // then recur on right subtree 
     printPostorder(node->right); 
  
     // now deal with the node 
     printf("%d ", node->data); 
} 
  
/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* node) 
{ 
     if (node == NULL) 
          return; 
  
     /* first recur on left child */
     printInorder(node->left); 
  
     /* then print the data of node */
     printf("%d ", node->data);   
  
     /* now recur on right child */
     printInorder(node->right); 
} 
  
/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node* node) 
{ 
     if (node == NULL) 
          return; 
  
     /* first print data of node */
     printf("%d ", node->data);   
  
     /* then recur on left sutree */
     printPreorder(node->left);   
  
     /* now recur on right subtree */
     printPreorder(node->right); 
}     
  

int main() 
{ 
     struct node *root  = newNode(1); 
     root->left             = newNode(2); 
     root->right           = newNode(3); 
     root->left->left     = newNode(4); 
     root->left->right   = newNode(5); 
     root->left->right->left= newNode(7);
     root->left->right->right = newNode(8);
     root->right->right = newNode(6); 
  
     printf("\nPreorder traversal of binary tree is \n"); 
     printPreorder(root);//1 2 4 5 7 8 3 6
  
     printf("\nInorder traversal of binary tree is \n"); 
     printInorder(root);//4 2 7 5 8 1 3 6 
  
     printf("\nPostorder traversal of binary tree is \n"); 
     printPostorder(root);// 4 7 8 5 2 6 3 1
  
     getchar(); 
     return 0; 
} 