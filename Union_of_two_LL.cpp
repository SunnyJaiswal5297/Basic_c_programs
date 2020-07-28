// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node* next;
	
	node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printList(struct node *node)
{
    while(node!=NULL){
        cout<<node->data<<' ';
        node = node->next;
    }
    printf("\n");
}

void push(struct node** head_ref, int new_data)
{
    struct node* new_node =	new node(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

struct node* makeUnion(struct node* head1, struct node* head2);

int main()
{
    long test;
    cin>>test;
    while(test--)
    {
        struct node* a = NULL;
        struct node* b = NULL;
        int n, m, tmp;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>tmp;
            push(&a, tmp);
        }
        cin>>m;
        for(int i=0; i<m; i++)
        {
            cin>>tmp;
            push(&b, tmp);
        }
        printList(makeUnion(a, b));
    }
    return 0;
}
// } Driver Code Ends


/*
structure of the node is as
struct node
{
	int data;
	struct node* next;
	
	node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
struct node* makeUnion(struct node* head1, struct node* head2)
{
    node *tmp=head1,*start=NULL;
    while(tmp->next!=NULL)
        tmp=tmp->next;
    tmp->next=head2;
    set<int> s;
    tmp=head1;
    while(tmp!=NULL)
    {
        s.insert(tmp->data);
        tmp=tmp->next;
    }
    for(auto x:s)
    {
        node *n=(struct node *)malloc(sizeof(node));
        n->data=x;
        n->next=NULL;
        if(start==NULL)
            tmp=start=n;
        else
        {
            tmp->next=n;
            tmp=n;
        }
    }
    return start;
}
