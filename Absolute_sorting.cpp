// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Linked List Node
struct Node
{
    Node* next;
    int data;
};
void sortList(Node** head);
// Utility function to insert a node at the
// beginning
void push(Node** head, int data)
{
    Node* newNode = new Node;
    newNode->next = (*head);
    newNode->data = data;
    (*head) = newNode;
}

// Utility function to print a linked list
void printList(Node* head)
{
    while (head != NULL)
    {
        cout << head->data;
        if (head->next != NULL)
            cout << " ";
        head = head->next;
    }
    cout<<endl;
}


// Driver code
int main()
{

int t=0;
int n = 0;
cin>>t;
while(t--)
{
 Node* head = NULL;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
       // push(&head, a);
    }
    for(int i=n-1;i>=0;i--)
    {
        push(&head, arr[i]);
    }
   // printList(head);

    sortList(&head);

    printList(head);

}
    return 0;
}

void sortList(Node** head)
{
    // Your Code Here
    Node *tmp=*head,*prev=*head;
    while(tmp!=NULL)
    {
        if(tmp->data>=0)
        {
            prev=tmp;
            tmp=tmp->next;
        }
        else
        {
            if(tmp==*head)
                tmp=tmp->next;
            else
            {
                prev->next=tmp->next;
                Node *d=tmp;
                tmp=tmp->next;
                d->next=*head;
                *head=d;
            }
        }
    }
}
/*
4
0 -2 3 -10
*/