// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}

Node* removeDuplicates(Node *root);

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
		
	
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}

Node * removeDuplicates(Node *head) 
{
    set<int> s;
    Node *tmp=head,*prev;
    while(tmp!=NULL)
    {
        if(s.empty())
        {
            s.insert(tmp->data);
            prev=tmp;
            tmp=tmp->next;
        }
        else
        {
            if(s.find(tmp->data)!=s.end())
            {
                Node *d=tmp;
                prev->next=tmp->next;
                tmp=tmp->next;
                free(d);
            }
            else
            {
                s.insert(tmp->data);
                prev=tmp;
                tmp=tmp->next;
            }
        }
    }
    return head;
}
