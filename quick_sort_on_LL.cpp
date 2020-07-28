// { Driver Code Starts
#include <iostream>
#include <cstdio>
using namespace std;
 
/* a node of the singly linked list */
struct node
{
    int data;
    struct node *next;
    
    node(int x){
        data = x;
        next = NULL;
    }
};

/* A utility function to insert a node at the beginning of linked list */
void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node = new node(new_data);
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
 
/* A utility function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
void quickSort(struct node **headRef);
int main()
{
	int t,n,x;
	cin>>t;
	while(t--){
		
        
        cin>>n;n=n-1;
		cin>>x;
        node *temp,*head = new node(x);
        temp=head;
        while(n--)
        {
			cin>>x;
          temp->next=new node(x);
          temp=temp->next;
			}
    
    quickSort(&head);
 
    printList(head);
 while(head!= NULL){
     temp=head;
     head=head->next;
     free(temp);
     
 }
	}
    return 0;
}// } Driver Code Ends


 
/* a node of the singly linked list 
struct node
{
    int data;
    struct node *next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}; */

//you have to complete this function
struct node *partition(struct node *head,struct node *tail)
{
    int pivot=tail->data;
    struct node *i=head;
    struct node *j,*prev=i;
    for(j=head;j!=tail;j=j->next)
    {
        if(j->data < pivot)
        {
            swap(i->data,j->data);
            prev=i;
            i=i->next;
        }
    }
    swap(i->data,tail->data);
    return prev;
}
void q_sort(struct node *head,struct node *tail)
{
    if(head!=tail && tail->next!=head)
    {
        struct node *middle=partition(head,tail);
        q_sort(head,middle);
        if(middle->next)
            q_sort(middle->next,tail);
    }
    printList(head);
}
void quickSort(struct node **headRef) 
{
    struct node *head=(*headRef),*tmp=(*headRef);
    while(tmp->next)
        tmp=tmp->next;
    q_sort(head,tmp);
}