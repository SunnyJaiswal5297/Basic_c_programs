// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
Node* addOne(Node *head);
Node* newNode(int key)
{
    Node *temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}
Node *ZZZZZZZZZZ(Node *head)
{
    Node * prev   = NULL;
    Node * current = head;
    Node * next;
    while (current != NULL)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
void print(struct Node *head)
{
	Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}
// This function mainly uses addOneUtil().
int main() {
	// your code goes here
	int T;
	cin>>T;
	int no;
	while(T--)
	{
		struct Node *head = NULL;
        struct Node *temp = head;
        
		cin>>no;
		while(no!=0)
			{
			if(head==NULL)
			head=temp=newNode(no%10);
			else
			{
				temp->next = newNode(no%10);
				temp=temp->next;
			}
			no/=10;
		}
		head = ZZZZZZZZZZ(head);
		
		head=addOne(head);
		print(head);
		cout<<endl;
	}
	return 0;
}

Node *addOne(Node *head)
{
   // Your Code here
   static int i=0;
   static int carry=0;
   if(head->next==NULL)
   {
	   if(i==0)  // case of single element
		   head->data=head->data+1;
	   else
	   {
		   if(head->data+1>=10)
		   {
			   head->data=0;
			   carry=1;
		   }
		   else
		   {
			   head->data+=1;
			   carry=0;
		   }
		}
	   	return head;
   	}
   	else
   	{
	   	i++;
	   	head->next=addOne(head->next);
	   	i--;
   		if(carry)
   		{
	   		if(head->data+carry>=10)
	   		{
		   		head->data=0;
		   		carry=1;
	   		}
	  	 	else
	   		{
		   		head->data+=1;
		   		carry=0;
	   		}
   		}
   		if(i==0 && carry)
   		{
	   		Node *n=(struct Node*)malloc(sizeof(Node));
	   		n->data=1;
	   		n->next=head;
	   		head=n;
   		}
   }
   return head;
}