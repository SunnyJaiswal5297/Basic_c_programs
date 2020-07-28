// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node* next;
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
    struct node* new_node =	(struct node*) malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

struct node* findIntersection(struct node* head1, struct node* head2);

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
        printList(findIntersection(a, b));
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
};
*/
struct node* findIntersection(struct node* head1, struct node* head2)
{
    map<int,int> ump;
    node *tmp=head1,*start=NULL;
    while(tmp->next!=NULL)
        tmp=tmp->next;
    tmp->next=head2;
    tmp=head1;
    while(tmp!=NULL)
    {
        ump[tmp->data]++;
        tmp=tmp->next;
    }
    for(auto x:ump)
    {
        if(x.second>1)
        {
            node *n=(struct node *)malloc(sizeof(node));
            n->data=x.first;
            n->next=NULL;
            if(start==NULL)
                tmp=start=n;
            else
            {
                tmp->next=n;
                tmp=n;
            }
        }
    }
    return start;
}
