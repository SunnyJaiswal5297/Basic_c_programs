#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
void append(Node **head_Ref,Node **tail_ref,int x)
{
    Node *n=new Node(x);
    if((*head_Ref)==NULL)
    {
        (*head_Ref)=n;
        (*tail_ref)=n;
    }
    else
    {
        (*tail_ref)->next=n;
        (*tail_ref)=n;
    }
}
void printList(Node *head)
{
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void segregate(Node *head)
{
    Node *even_head=NULL,*odd_head=NULL;
    Node *tmp=head,*even_curr=NULL,*odd_curr=NULL;
    while(tmp!=NULL)
    {
        Node *n=new Node(tmp->data);
        if((tmp->data)%2==0)
        {
            if(even_head==NULL)
            {
                even_head=n;
                even_curr=n;
            }
            else
            {
                even_curr->next=n;
                even_curr=n;
            }
        }
        else
        {
            if(odd_head==NULL)
            {
                odd_head=n;
                odd_curr=n;
            }
            else
            {
                odd_curr->next=n;
                odd_curr=n;
            }
        }
        tmp=tmp->next;
    }
    if(even_head==NULL)
        printList(odd_head);
    else if(odd_head==NULL)
        printList(even_head);
    else
    {
        printList(even_head);
        printList(odd_head);
    }
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        Node *head=NULL,*tail=NULL;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            append(&head,&tail,x);
        }
        //printList(head);
        segregate(head);
    }
	return 0;
}

/*
7
17 15 8 9 2 4 6
*/