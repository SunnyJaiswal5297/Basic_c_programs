#include <bits/stdc++.h>
using namespace std;

struct Node 
{
	int data;
	struct Node* next;
	Node(int x)
    {
	    data = x;
	    next = NULL;
	}
};

void append(struct Node** headRef, int newData)
{
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	struct Node *last = *headRef;
	new_node->data = newData;
	new_node->next = NULL;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}

int sumOfLastN_Nodes(struct Node* head, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        struct Node* head = NULL;
        int n,m,tmp;
        cin>>m>>n;
        while(m--){
            cin>>tmp;
            append(&head, tmp);
        }
        cout<<sumOfLastN_Nodes(head, n)<<endl;
    }
	return 0;
}

int sumOfLastN_Nodes(struct Node* head, int n)
{
    int m=0;
    struct Node *tmp=head;
    while(tmp!=NULL)
    {
        m++;
        tmp=tmp->next;
    }
    int start=m-n,sum=0,count=0;
    tmp=head;
    while(tmp!=NULL)
    {
        if(count>=start)
            sum+=tmp->data;
        tmp=tmp->next;
        count++;
    }
    return sum;
}