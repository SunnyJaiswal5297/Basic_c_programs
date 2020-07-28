// { Driver Code Starts
/*
Given two lists sorted in increasing order, create and return a new list representing the intersection of the two lists. The new list should be made with its own memory — the original lists should not be changed.

For example, let the first linked list be 1->2->3->4->6 and second linked list be 2->4->6->8, then your function should create and return a third list as 2->4->6.
*/
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    struct Node *next;
    
    Node(int data){
        val = data;
        next = NULL;
    }
    
};

void push(struct Node **root,int data)
{
    Node *newnode=new Node(data);
    struct Node *prev;
    prev=*root;
    
    if(*root==NULL)
    {
        *root=newnode;
        return;
    }
    while(prev->next!=NULL)
        prev=prev->next;

    prev->next=newnode;
}

void print(struct Node *ptr)
{
    if(ptr==NULL)
    {
        cout<<"NO"<<endl;
        return;
    }
    while(ptr!=NULL)
    {
        cout<<ptr->val<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
void intersection(struct Node **head1,struct Node **head2,struct Node **head3);

int main()
{
    struct Node *head1=NULL;
    struct Node *head2=NULL;
    struct Node *head3=NULL;
    int t,n1,n2;
    cin>>t;
    while(t--)
    {
        struct Node *head1=NULL;
        struct Node *head2=NULL;
        struct Node *head3=NULL;
        cin>>n1>>n2;
        int k;
        for(int i=0;i<n1;i++)
        {
            cin>>k;
    
            push(&head1,k);
        }
    
        for(int i=0;i<n2;i++)
        {
            cin>>k;
            push(&head2,k);
             
        }
           
        intersection(&head1,&head2,&head3);
        print(head3);
      
    }
}


void intersection(Node **head1, Node **head2,Node **head3)
{
    Node *curr1=(*head1),*curr2=(*head2);
    while(curr1 && curr2)
    {
        if(curr1->val<curr2->val)
            curr1=curr1->next;
        else if(curr1->val>curr2->val)
            curr2=curr2->next;
        else
        {
            push(head3,curr1->val);
            curr1=curr1->next;
            curr2=curr2->next;
        }
    }
}