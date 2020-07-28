// { Driver Code Starts


#include <iostream>
#include <stdio.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void append(struct Node** headRef, int newData)
{
	struct Node* new_node = new Node(newData);
	struct Node *last = *headRef;
	
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)last = last->next;
	last->next = new_node;
}

void printList(struct Node *node)
{
    while(node!=NULL){
        printf("%d ", node->data);
        node = node->next;
    }
    cout<<endl;
} 

void alternatingSplitList(struct Node*); 

struct Node* a;
struct Node* b;

int main()
{
    int test;
    cin>>test;
    
    while(test--)
    {
        a=b=NULL;
        struct Node* head = NULL;
        
        
        int n, k;
        cin>>n;
        
        while(n--)
        {
            cin>>k;
            append(&head, k);
        }
        
        alternatingSplitList(head);
        printList(a);
        printList(b);
    }
    return 0;
}


void alternatingSplitList(struct Node* head) 
{
    //Your code here
    Node *a_end=NULL,*b_end=NULL;
    a=NULL,b=NULL;
    bool flag=true;
    while(head!=NULL)
    {
        Node *n=new Node(head->data);
        if(flag)
        {
            if(a==NULL)
            {
                a=n;
                a_end=n;
            }
            else
            {
                a_end->next=n;
                a_end=n;
            }
            flag=false;
        }
        else
        {
            if(b==NULL)
            {
                b=n;
                b_end=n;
            }
            else
            {
                b_end->next=n;
                b_end=n;
            }
            flag=true;
        }
        head=head->next;
    }
}

