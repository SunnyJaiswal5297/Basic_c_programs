// { Driver Code Starts
#include <bits/stdc++.h>
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
 
 Node *zigZack(Node* head);


int main() {
	// your code goes here
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
				temp=temp->next;
			}
		}
		Node *ans = zigZack(head);
		print(ans);
		cout<<endl;
	}
	return 0;
}// } Driver Code Ends


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
*/


Node *zigZack(Node* head)
{
    Node *tmp=head;
    if(tmp->next==NULL)
        return head;
    bool flag=true;
    while(tmp->next)
    {
        if(flag)
        {
            if(tmp->data>tmp->next->data)
                swap(tmp->data,tmp->next->data);
            flag=false;
        }
        else
        {
            if(tmp->data<tmp->next->data)
                swap(tmp->data,tmp->next->data);
            flag=true;
        }
        tmp=tmp->next;
    }
    return head;
}
/*
5
11 15 20 5 10
*/