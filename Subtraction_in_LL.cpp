// { Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* Linked list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};


Node *reverse(Node **r)
{
    Node *prev =NULL;
    Node *cur = *r;
    Node *nxt;
    while(cur!=NULL)
    {
        nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    *r = prev;
}
/* Function to create a new Node with given data */
struct Node *newNode(int data)
{
    struct Node *new_Node = new Node(data);
    
    return new_Node;
}

struct Node* addTwoLists (struct Node* first, struct Node* second);

/* Function to insert a Node at the beginning of the Doubly Linked List */
void push(struct Node** head_ref, int new_data)
{
    /* allocate Node */
    struct Node* new_Node = new Node(new_data);

    /* link the old list off the new Node */
    new_Node->next = (*head_ref);

    /* move the head to point to the new Node */
    (*head_ref)    = new_Node;
}


void printList(struct  Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

Node* subLinkedList(Node* l1, Node* l2);

/* Driver program to test above function */
int main(void)
{


   int t,n,m,i,x;
   cin>>t;
   while(t--)
   {
	   struct Node* res = NULL;
    struct Node* first = NULL;
    struct Node* second = NULL;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
			cin>>x;
			push(&first, x);
	    }
         cin>>m;
	    for(i=0;i<m;i++)
	    {
			cin>>x;
	    push(&second, x);
	    }

	     reverse(&first);
	     reverse(&second);
		 res = subLinkedList(first, second);
	    printList(res);
   }
   return 0;
}
// } Driver Code Ends


/* Structure of linked list Node
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
long long int count_nodes(Node *head)
{
    long long count=0;
    while(head)
    {
        count++;
        head=head->next;
    }
    return count;
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
bool str(Node *head1,Node *head2)
{
    string str1={},str2={};
    while(head1)
    {
        str1=str1+to_string(head1->data);
        head1=head1->next;
    }
    while(head2)
    {
        str2=str2+to_string(head2->data);
        head2=head2->next;
    }
    cout<<str1<<endl;
    cout<<str2<<endl;
    return str1<str2;
}
/*You are required to complete this method*/
Node* subLinkedList(Node* l1, Node* l2)
{
    int borrow=0;
    long long int n=count_nodes(l1);
    long long int m=count_nodes(l2);
    if(n<m)
        swap(l1,l2);
    else if(n==m && str(l1,l2))
        swap(l1,l2);
    l1=reverse(l1);
    l2=reverse(l2);
    printList(l1);
    printList(l2);
    Node *tmp1=l1,*tmp2=l2,*res_begin=NULL,*res_end=NULL;
    while(tmp1 && tmp2)
    {
        Node *n=new Node(0);
        if(tmp1->data<tmp2->data)
        {
            int temp=(tmp1->data+10-borrow)-tmp2->data;
            n->data=temp;
            borrow=1;
        }
        else if(borrow && tmp1->data==tmp2->data)
        {
            int temp=((tmp1->data+10-borrow)-tmp2->data);
            n->data=temp;
            borrow=1;
        }
        else
        {
            int temp=(tmp1->data-tmp2->data)-borrow;
            n->data=temp;
            borrow=0;
        }
        //updation of res_list
        if(res_begin==NULL)
            res_begin=res_end=n;
        else
        {
            res_end->next=n;
            res_end=n;
        }
        tmp1=tmp1->next;
        tmp2=tmp2->next;
    }
    while(tmp1)
    {
        Node *n=new Node(0);
        if(borrow)
        {
            if(tmp1->data==0)
            {
                n->data=9;
                borrow=1;
            }
            else
            {
                n->data=tmp1->data-borrow;
                borrow=0;
            }
        }
        else
            n->data=tmp1->data;
        res_end->next=n;
        res_end=n;
        tmp1=tmp1->next;
    }
    //printList(res_begin);
    res_begin=reverse(res_begin);
    //check for initial zeros
    tmp1=res_begin;
    bool flag=true;
    //printList(res_begin);
    while(tmp1)
    {
        if(flag && tmp1->data==0)
        {
            res_begin=res_begin->next;
            flag=true;
            tmp1=tmp1->next;
        }
        else
            break;
    }
    //printList(res_begin);
    return res_begin;
}