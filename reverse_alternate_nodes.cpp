// { Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */

void rearrange(struct Node *odd);

struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while (t--) 
    {
        insert();
        rearrange(start);
        printList(start);
    }
    return 0;
}
Node *reverse(Node *head)
{
    Node *prev=NULL;
    Node *curr=head;
    Node *next=NULL;
    while(curr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
void rearrange(struct Node *odd)
{
    Node *tmp=odd;
    if(tmp->next==NULL ||tmp->next->next==NULL)
        return ;
    Node *s1=NULL,*s2=NULL,*e1=NULL,*e2=NULL;
    bool flag=true;
    while(tmp)
    {
        Node *n=new Node(tmp->data);
        if(flag)
        {
            if(s1==NULL)
                e1=s1=n;
            else
            {
                e1->next=n;
                e1=n;
            }
            flag=false;
        }
        else
        {
            if(s2==NULL)
                s2=e2=n;
            else
            {
                e2->next=n;
                e2=n;
            }
            flag=true;
        }
        tmp=tmp->next;   
    }
    e1->next=NULL;
    e2->next=NULL;
    s2=reverse(s2);
    e1->next=s2;
    *odd=*s1;
}

