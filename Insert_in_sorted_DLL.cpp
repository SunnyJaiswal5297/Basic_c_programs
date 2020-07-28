// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* prev, *next;
};

struct Node* getNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->prev = newNode->next = NULL;
	return newNode;
}

struct Node* newNode(struct Node* head,int data){
	 struct Node *p,*temp= (struct Node*)malloc(sizeof(struct Node));
	 temp->data=data;
	 temp->next=NULL;
	 temp->prev=NULL;
	 if(head ==NULL)
	 return temp;
	 p=head;
	 while(p->next!=NULL){
	 p=p->next;}
	 p->next=temp;
	 temp->prev=p;
	 return head; 
}

void printList(struct Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}


bool isChecked(Node *head)
{
    int lengthF=0;
    int lengthB=0;
    Node *temp=head;
    while(temp->next)
    {
        temp=temp->next;
        lengthF++;
    }
    
    while(temp->prev)
    {
        temp=temp->prev;
        lengthB++;
    }
    
    return lengthF==lengthB;
}

Node* sortedInsert(Node * head, int x);



int main()
{
    int t;
    cin>>t;
    while(t--){
        struct Node* head = NULL;
	    struct Node* new_node = NULL;
	    int n, tmp, x;
	    cin>>n;
	    while(n--){
	        cin>>tmp;
	        head=newNode(head, tmp);
	    }
	    cin>>x;
	    head=sortedInsert(head, x);
	    
	    if(isChecked(head))
	    printList(head);
	    else
	    cout<<"The node has not been inserted correctly. Please fix the prev and next pointers";
	    cout<<endl;
    }
	return 0;
}
// } Driver Code Ends


/*structure of the node of the DLL is as
struct Node {
	int data;
	struct Node* prev, *next;
};
*/
// function should insert a new node in sorted way in
// a sorted doubly linked list
//Return the head after insertion
Node* sortedInsert(Node * head, int x)
{
	// Code here
    Node *n= new Node();
    n->data=x;
    n->prev=n->next=NULL;
    Node *tmp=head,*p=head;
    while(tmp!=NULL)
    {
        if(tmp->data>=x)
        {
            if(tmp==head)
            {
                n->next=head;
                head->prev=n;
                head=n;
                return head;
            }
            p->next=n;
            n->next=tmp;
            n->prev=p;
            tmp->prev=n;
            return head;
        }
        else
        {
            p=tmp;
            tmp=tmp->next;
        }
    }
    if(tmp==NULL)
    {
        p->next=n;
        n->prev=p;
    }
    return head;
}