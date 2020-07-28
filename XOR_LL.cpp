// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct Node
{
	int data;
	struct Node* npx;
};

struct Node* XOR (struct Node *a, struct Node *b)
{
	return (struct Node*) ((uintptr_t) (a) ^ (uintptr_t) (b));
}

void insert(struct Node **head_ref, int data);

void printList (struct Node *head);

// Driver program to test above functions
int main ()
{
    int t;
    scanf("%d", &t);
    while(t--){
        struct Node *head = NULL;
        int n, tmp;
        scanf("%d", &n);
        while(n--){
            scanf("%d", &tmp);
            insert(&head, tmp);
        }
        printList (head);
        printf("\n");
    }
	return (0);
}
// } Driver Code Ends


/*
Structure of linked list is as
struct Node
{
	int data;
	struct Node* npx; 
};

Utility function to get XOR of two Struct Node pointer
use this function to get XOR of two pointers */



// function should insert the data to the front of the list
void insert(struct Node **head_ref, int data)
{
	// Code here
    Node *n=new Node();
    n->data=data;
    n->npx=(*head_ref);
    if((*head_ref)!=NULL)
        (*head_ref)->npx=XOR(n,(*head_ref)->npx);
    (*head_ref)=n;
}

// function should prints the contents of doubly linked list
// first in forward direction and then in backward direction
// you should print a next line after printing in forward direction
void printList (struct Node *head)
{
	// Code here
    Node *prev=NULL,*curr=head,*next;
    while(curr)
    {
        printf("%d ",curr->data);
        next=XOR(prev,curr->npx);
        prev=curr;
        curr=next;
    }
    printf("\n");
    curr=prev;
    prev=NULL;
    while(curr)
    {
        printf("%d ",curr->data);
        next=XOR(prev,curr->npx);
        prev=curr;
        curr=next;
    }
}
