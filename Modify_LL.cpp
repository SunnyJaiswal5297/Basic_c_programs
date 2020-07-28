// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node* modifyTheList(struct Node *head);

void push(struct Node **head_ref, int new_data)
{
  struct Node* new_node = new Node(new_data);
  new_node->next = *head_ref;    
  *head_ref = new_node;
}

void printList(struct Node *head)
{
    if (!head)
        return;
   	while (head->next != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << head->data << endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL;
		while(n--){
			int a;
			cin>>a;
			push(&head, a);
		}
		head = modifyTheList(head);
		printList(head);
	}
    return 0;
}

// } Driver Code Ends


/*Complete the function below
Node is as follows:
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
struct Node* modifyTheList(struct Node *head)
{
    //add code here.
    vector<int> v;
    int i;
    Node *slow=head,*fast=head,*tmp;
    while(fast->next && fast->next->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    tmp=slow->next;
    while(tmp)
    {
        v.push_back(tmp->data);
        tmp=tmp->next;
    }
    reverse(v.begin(),v.end());
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    tmp=head;i=0;
    while(i<=v.size())
    {
        tmp->data=tmp->data-v[i++];
        tmp=tmp->next;
    }
    return head;
}