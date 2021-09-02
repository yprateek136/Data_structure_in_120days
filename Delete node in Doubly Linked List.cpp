#include <stdio.h>
#include <stdlib.h>

/* a Node of the doubly linked list */
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};


 // } Driver Code Ends
/* Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
*/

class Solution
{
    public:
    Node* deleteNode(struct Node *head_ref,int x)
    {
    
       struct Node *del = head_ref;
       x = x-1;
       
       while(x--)
        del = del->next;
    
      /* base case */
      if(head_ref == NULL || del == NULL)
        return NULL;
     
      /* If Node to be deleted is head Node */
      if(head_ref == del)
        head_ref = del->next;
     
      /* Change next only if Node to be deleted is NOT the last Node */
      if(del->next != NULL)
        del->next->prev = del->prev;
     
      /* Change prev only if Node to be deleted is NOT the first Node */
      if(del->prev != NULL)
        del->prev->next = del->next;     
     
      /* Finally, free the memory occupied by del*/
      free(del);
      return head_ref;
    }     
};

// { Driver Code Starts.

/* Function to print Nodes in a given doubly linked list
   This function is same as printList() of singly linked lsit */
void printList(struct Node *node)
{
  while(node!=NULL)
  {
    printf("%d ", node->data);
    node = node->next;
  }
   printf("\n");
}
 
/* Drier program to test above functions*/
int main()
{
  int t, x, n, i;
  scanf("%d",&t);
  
  while(t--)
  {
      /* Start with the empty list */
      struct Node *temp,*head = NULL;
      scanf("%d",&n);
      
      temp = NULL;
      
      for(i=0;i<n;i++){
        scanf("%d",&x);
        
        if(head == NULL){
            head = new Node(x);
            temp = head;
        }
        else{
            Node *temp1 = new Node(x);
            temp->next = temp1;
            temp1->prev = temp;
            temp = temp->next;
        }
      }
  
    scanf("%d",&x);
      
    Solution ob;  
    head = ob.deleteNode(head,x); 
      
        
        printList(head);           
        while(head->next!=NULL)
        {
    	    temp=head;
    	    head=head->next;
    	    free(temp);
    	}
    	
    	free(head);
	}
	return 0;
}
  // } Driver Code Ends