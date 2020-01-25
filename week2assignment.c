#include<stdio.h> 
#include<stdlib.h> 
#define bool int 
  

struct Node 
{ 
   char data; 
   struct Node *next; 
}; 
  

void push(struct Node** top, int newdata)
 { 
  
  struct Node* newnode = 
            (struct Node*) malloc(sizeof(struct Node)); 
  
  if (newnode == NULL) 
  { 
     printf("Stack overflow n"); 
     getchar(); 
     exit(0); 
  }            
  
  
  newnode->data  = newdata; 
  
 
  newnode->next = (*top);   
  
  
  (*top)    = newnode; 
} 
   

int pop(struct Node** top)
{ 
  char res; 
  struct Node *head; 
  
  
  if (*top == NULL) 
  { 
     printf("Stack overflow n"); 
     getchar(); 
     exit(0); 
  } 
  else
  { 
     head = *top; 
     res = head->data; 
     *top = head->next; 
     free(head); 
     return res; 
  } 
} 
  

bool check(char c1, char c2) 
{ 
   if (c1 == '(' && c2 == ')') 
     return 1; 
   
   else
     return 0; 
} 
  

bool balance(char exp[]) 
{ 
  
  
   struct Node *st= NULL; 
  
   
for(int i=0;i<20;i++)
   { 
     
      if (exp[i] == '(' ) 
        push(&st, exp[i]); 
  
     
      if (exp[i] == ')' ) 
      { 
              
         
         if (st == NULL) 
           return 0;  
  
       else if ( !check(pop(&st), exp[i]) ) 
        
        
           return 0; 
      } 
      
   } 
     
   
   if (st == NULL) 
     return 1; 
   else
     return 0;  
}  

int main() 
{ char input[20];
  printf("Enter Expression");
  gets(input);

  if (balance(input)) 
    printf("Balanced \n"); 
  else
    printf("Not Balanced \n");   
  return 0; 
}     
  





