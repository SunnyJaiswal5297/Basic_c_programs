// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};

void sort(Node **head);


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

// A utility function to print a linked list
void printList(Node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
	    struct Node* head = NULL;
	    int n, k;
	    cin>>n;
	    for(int i=0; i<n ;i++){
	        cin>>k;
	        append(&head, k);
	    }
	    sort(&head);
	    printList(head);
	}
	return 0;
}
// } Driver Code Ends


/*Structure of Node of the linked list is as
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
*/
// your task is to complete this function
Node *rev(Node *head)
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

void sort(Node **head)
{
    // Code here
    Node *l1_head=NULL,*l1_end=NULL,*l2_head=NULL,*l2_end=NULL;
    Node *tmp=(*head);
    bool flag=true;
    while(tmp)
    {
        Node *d=tmp->next;
        if(flag)
        {
            if(l1_head==NULL)
                l1_head=l1_end=tmp;
            else
            {
                l1_end->next=tmp;
                l1_end=tmp;
            }
            flag=false;
        }
        else
        {
            if(l2_head==NULL)
                l2_head=l2_end=tmp;
            else
            {
                l2_end->next=tmp;
                l2_end=tmp;
            }
            flag=true;
        }
        tmp=d;
    }
    l1_end->next=NULL;
    l2_end->next=NULL;
    //printList(l1_head);
    //printList(l2_head);
    //reverse second list
    l2_head=rev(l2_head);
    //printList(l1_head);
    //printList(l2_head);
    //merge l1 & l2
    Node *tmp1=l1_head,*tmp2=l2_head,*new_head=NULL,*new_end=NULL;
    while(tmp1 && tmp2)
    {
        if(tmp1->data<tmp2->data)
        {
            if(new_head==NULL)
                new_end=new_head=tmp1;
            else
            {
                new_end->next=tmp1;
                new_end=tmp1;
            }
            tmp1=tmp1->next;
        }
        else
        {
            if(new_head==NULL)
                new_head=new_end=tmp2;
            else
            {
                new_end->next=tmp2;
                new_end=tmp2;
            }
            tmp2=tmp2->next;
        }
    }
    if(tmp1)
        new_end->next=tmp1;
    if(tmp2)
        new_end->next=tmp2;
    (*head)=new_head;
}
/*6
1 9 2 8 3 7
6
991 20 1000 19 1001 1*/