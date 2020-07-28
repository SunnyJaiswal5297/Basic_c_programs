// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}

struct Node * mergeResult(struct Node *node1,struct Node *node2);

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }

        struct Node* result = mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

Node* reverseList(Node *head)
{
    Node* prev=NULL;
    Node* curr=head;
    Node* next=NULL;        
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

struct Node * mergeResult(Node *node1,Node *node2)
{
    // your code goes here
    Node *head1=reverseList(node1);
    Node *head2=reverseList(node2);
    Node *head=NULL,*end=NULL;
    while(head1 && head2)
    {
        Node *n=(struct Node *)malloc(sizeof(Node));
        if(head1->data>=head2->data)
        {
            n->data=head1->data;
            n->next=NULL;
            head1=head1->next;
        }
        else
        {
            n->data=head2->data;
            head2=head2->next;
        }
        if(head==NULL)
        {
            head=n;
            end=n;
        }
        else
        {
            end->next=n;
            end=n;
        }
    }
    while(head1)
    {
        Node *n=(struct Node *)malloc(sizeof(Node));
        n->data=head1->data;
        n->next=NULL;
        end->next=n;
        end=n;
        head1=head1->next;
    }
    while(head2)
    {
        Node *n=(struct Node *)malloc(sizeof(Node));
        n->data=head2->data;
        n->next=NULL;
        end->next=n;
        end=n;
        head2=head2->next;
    }
    return head;
}
/*
4 3
5 10 15 40 
2 3 20
*/