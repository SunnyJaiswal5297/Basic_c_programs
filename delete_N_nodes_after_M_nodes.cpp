// { Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */

void linkdelete(struct Node  *head, int M, int N);

struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while(node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert(int n1)
{
    int n,value;
    n=n1;
    struct Node *temp;
    
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp=start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp=temp->next;
        }
    }
}

int main()
{
    int t,n1;
    cin>>t;
    while (t--) {
        cin>>n1;
        int m,n;
        cin>>m;
        cin>>n;
        insert(n1);
        linkdelete(start,m,n);
        printList(start);
    }
    
    return 0;
}

void linkdelete(struct Node  *head, int M, int N)
{
    if(N==0)
        return;
    Node *tmp=head,*prev;
    int count1=0,count2=N;
    while(tmp!=NULL)
    {
        if(count1==M)
        {
            if(count2--)
            {
                Node *d=tmp;
                prev->next=tmp->next;
                tmp=tmp->next;
                free(d);
            }
            if(count2==0)
            {
                count1=0;
                count2=N;
            }
        }
        else
        {
            prev=tmp;
            tmp=tmp->next;
            count1++;
        }
    }
}

/*
2 1
9 1 3 5 9 4 10 1
*/