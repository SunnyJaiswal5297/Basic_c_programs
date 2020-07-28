// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printlist(Node *head)
{
	if (head==NULL)return;
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void append(struct Node** headRef, char data)
{
	struct Node* new_node = new Node(data);
	struct Node *last = *headRef;

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

// task is to complete this function
struct Node* arrange(Node *head);

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        char tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        head = arrange(head);
        printlist(head);
    }
	return 0;
}

// } Driver Code Ends


/*
Structure of the node of the linked list is as
struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
// task is to complete this function
// function should return head to the list after making 
// necessary arrangements
bool vowel_cons_check(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return true;
    else
        return false;
}
struct Node* arrange(Node *head)
{
    //Code here
    Node *tmp=head,*vowel=NULL,*vowel_end=NULL,*cons=NULL,*cons_end=NULL;
    while(tmp!=NULL)
    {
        bool flag=vowel_cons_check(tmp->data);
        Node *n= new Node(tmp->data);
        if(flag)
        {
            if(vowel==NULL)
                vowel=vowel_end=n;
            else
            {
                vowel_end->next=n;
                vowel_end=n;
            }
        }
        else
        {
            if(cons==NULL)
                cons=cons_end=n;
            else
            {
                cons_end->next=n;
                cons_end=n;
            }
        }
        tmp=tmp->next;
    }
    if(vowel_end)
        vowel_end->next=cons;
    if(vowel)
        head=vowel;
    else
        head=cons;
    return head;
}
/*
a e g h i m
*/
