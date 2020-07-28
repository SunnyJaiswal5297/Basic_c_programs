#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
void push(struct node** head_ref,int data)
{
    node* new_node=new node(data);
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
int count(struct node* head)
{
    int c=0;
    while(head)
    {
        head=head->next;
        c++;
    }
    return c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        node *head=NULL;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            push(&head,x);
        }
        cout<<count(head)<<endl;
    }
    return 0;
}