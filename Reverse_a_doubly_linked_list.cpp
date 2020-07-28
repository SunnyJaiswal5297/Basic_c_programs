// { Driver Code Starts




//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

Node *newNode(int data)
{
    Node *temp=new Node(data);
    
    return temp;
}


Node *addNode(Node *head, int data)
{
    if(head==NULL)
    head=newNode(data);
    else
    {
        Node * temp=head;
        Node * prev=head;
        while(temp->next)
            {
                prev=temp;
                temp=temp->next;
                
            }
        temp->next=newNode(data);
        prev=temp;
        temp=temp->next;
        temp->prev=prev;
    }
    
    return head;
}



void displayList(Node *head)
{
    //Head to Tail
    while(head->next)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<head->data;
    
    
    
}


int getLength(Node * head)
{
    Node *temp=head;
    
    int count=0;
    while(temp->next!=head)
    {
        count++;
        temp=temp->next;
    }
    return count+1;
}




bool verify(Node* head)
{
    int fl=0;
    int bl=0;
    
    Node *temp=head;
    
    while(temp->next)
    {
        temp=temp->next;
        fl++;
    }
    
    while(temp->prev)
    {
        temp=temp->prev;
        bl++;
    }
    
    return fl==bl;
}


 // } Driver Code Ends








/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
Node* reverseDLL(Node * head)
{
    if(head->next==NULL)
        return head;
    Node *prev=NULL,*tmp=head,*next=NULL;
    while(tmp!=NULL)
    {
        next=tmp->next;
        tmp->next=prev;
        tmp->prev=next;
        prev=tmp;
        tmp=next;
    }
    return prev;
}


// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Node *head=NULL;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        head=addNode(head,x);
	    }
	    head=reverseDLL(head);
	    
	    
	    if(verify(head))
	    displayList(head);
	    else
	    cout<<"Your pointers are not correctly connected";
 
	    cout<<endl;
	}
	return 0;
}

  // } Driver Code Ends