// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


Node *compute(Node *head);

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Node *result = compute(head);
        print(result);
        cout<<endl;
    }
}
// } Driver Code Ends


/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
8
12 15 10 11 5 6 2 3
*/
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
Node *compute(Node *head)
{
    // your code goes here
    head=reverse(head);
    //print(head);
    int max=head->data;
    Node *prev=head,*tmp=head->next;
    while(tmp)
    {
        if(tmp->data<max)
        {
            Node *d=tmp;
            prev->next=tmp->next;
            tmp=tmp->next;
            free(d);
        }
        else
        {
            max=tmp->data;
            prev=tmp;
            tmp=tmp->next;
        }
    }
    //print(head);
    head=reverse(head);
    return head;
}
