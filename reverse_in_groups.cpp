// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct node *reverse (struct node *head, int k);

struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* UTILITY FUNCTIONS */
/* Function to push a node */

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void)
{
    /* Start with the empty list */

     int t;
     cin>>t;
     
     while(t--)
     {
         struct node* head = NULL;
         struct node* temp = NULL;
         int n;
         cin >> n;
         
         for(int i = 0;i<n;i++){
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
         }
        
        int k;
        cin>>k;
        head = reverse(head, k);

        printList(head);
    
     }
     
     return(0);

}

// } Driver Code Ends


/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/
int count_nodes(node *head)
{
    int n=0;
    while(head)
    {
        n++;
        head=head->next;
    }
    return n;
}
node *reverse(node *head)
{
    node *prev=NULL;
    node *curr=head;
    node *next=NULL;
    while(curr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
struct node *reverse (struct node *head, int k)
{ 
    // Complete this method
    int n=count_nodes(head);
    int count=ceil((double)n/(double)k);
    int t=count;
    node *tmp=head,*new_head=NULL,*next_head=NULL;
    while(t)
    {
        int len=k-1;
        while(len-- && tmp->next)
            tmp=tmp->next;
        new_head=next_head;
        next_head=tmp->next;
        tmp->next=NULL;
        if(t==count)
        {
            head=reverse(head);
            printList(head);
        }
        else
        {
            new_head=reverse(new_head);
            printList(new_head);
        }
        node *prev_end;
        if(t==count)
        {
            tmp=head;
            while(tmp->next)
                tmp=tmp->next;
            prev_end=tmp;
        }
        else
        {
            prev_end->next=new_head;
            tmp=new_head;
            while(tmp->next)
                tmp=tmp->next;
            prev_end=tmp;
        }
        tmp=next_head;
        t--;
    }
    return head;
}
/*
5
1 2 3 4 5
3
*/