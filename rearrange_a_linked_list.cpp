// { Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


// Rearranges given linked list such that all even
// positioned Nodes are before odd positioned.
// Returns new head of linked List.
Node *rearrangeEvenOdd(Node *head);

/* Driver program to test above function*/
int main()
{
    int T,i,n,l;

    cin>>T;

    while(T--)
    {
        struct Node *head = NULL;
        struct Node *temp = head;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>l;

            if (head == NULL)
            {   
                head = temp = new Node(l); 
                
            }
            else
            {  temp->next = new Node(l);
               temp = temp->next;
            }
        }

        head = rearrangeEvenOdd(head);
        while(head != NULL)
        {
            printf("%d ", head->data);
            head = head->next;
        }
        printf("\n");
    }
    return 0;
}

Node *rearrangeEvenOdd(Node *head)
{
   // Your Code here
   Node *tmp=head,*prev,*even_head=NULL,*even_end=NULL;
   int count=1;
   while(tmp!=NULL)
   {
       if(count%2==0)
       {
           if(even_head==NULL)
           {
               even_head=even_end=tmp;
               prev->next=tmp->next;
               tmp=tmp->next;
               even_end->next=NULL;
           }
           else
           {
               prev->next=tmp->next;
               even_end->next=tmp;
               even_end=tmp;
               tmp=tmp->next;
               even_end->next=NULL;
           }
       }
       else
       {
           prev=tmp;
           tmp=tmp->next;
       }
       count++;
   }
   prev->next=even_head;
   return head;
}
/*
5
1 2 3 4 5
*/