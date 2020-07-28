// { Driver Code Starts
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};

Node* sortedMerge(struct Node* a, struct Node* b);


/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int T,i,n1,n2,l,k;

    cin>>T;

    while(T--)
    {
        struct Node *head1 = NULL,  *tail1 = NULL;
        struct Node *head2 = NULL,  *tail2 = NULL;

        cin>>n1>>n2;
        int d1 , d2 , temp;
        cin>>d1;
        head1 = new Node(d1);
        tail1 = head1;
        for(i=1; i<n1; i++)
        {
            cin>>temp;
            tail1->next = new Node(temp);
            tail1 = tail1->next;
        }
        cin>>d2;
        head2 = new Node(d2);
        tail2 = head2;
        for(i=1; i<n2; i++)
        {
            cin>>temp;
            tail2->next = new Node(temp);
            tail2 = tail2->next;
        }
        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}

Node* sortedMerge(Node* head1,   Node* head2)
{
    Node *start=NULL,*end=NULL;
    Node *curr1=head1,*curr2=head2;
    if(curr1==NULL)
        return curr2;
    if(curr2==NULL)
        return curr1;
    while(curr1 && curr2)
    {
        if(curr1->data<=curr2->data)
        {
            Node *n=new Node(curr1->data);
            if(start==NULL)
            {
                start=n;
                end=n;
            }
            else
            {
                end->next=n;
                end=n;
            }
            curr1=curr1->next;
        }
        else if(curr1->data>curr2->data)
        {
            Node *n=new Node(curr2->data);
            if(start==NULL)
            {
                start=n;
                end=n;
            }
            else
            {
                end->next=n;
                end=n;
            }
            curr2=curr2->next;
        }
    }
    while(curr1)
    {
        Node *n=new Node(curr1->data);
        end->next=n;
        end=n;
        curr1=curr1->next;
    }
    while(curr2)
    {
        Node *n=new Node(curr2->data);
        end->next=n;
        end=n;
        curr2=curr2->next;
    }
    return start;
}
