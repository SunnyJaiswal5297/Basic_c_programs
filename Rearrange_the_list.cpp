// { Driver Code Starts
#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


Node *inPlace(Node *root);
 
void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main() {
	// your code goes here
	int T;
	cin>>T;
 
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		Node *res = inPlace(head);
		print(res);
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/


Node *inPlace(Node *head)
{
    int a[100],i=0,n=0,j;
    Node *tmp=head,*prev;
    while(tmp!=NULL)
    {
        a[i++]=tmp->data;
        n++;
        tmp=tmp->next;
    }
    //reverse the array;
    i=0,j=n-1;
    while(i<j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
    }
    bool flag=true;
    tmp=head;
    for(i=0;i<n/2;)
    {
        if(flag)
        {
            prev=tmp;
            tmp=tmp->next;
            flag=false;
        }
        else
        {
            Node *n=new Node(a[i]);
            prev->next=n;
            n->next=tmp;
            i++;
            flag=true;
        }
    }
    if(n%2==0)
        prev->next->next=NULL;
    else
        tmp->next=NULL;
    return head;
}
