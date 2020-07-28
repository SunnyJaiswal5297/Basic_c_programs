// { Driver Code Starts
#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node *sortedInsert(struct Node *head, int data);

Node *last = nullptr;

void append(struct Node **headRef, int newData) {
    struct Node *new_node = new Node(newData);

    if (*headRef == NULL) {
        *headRef = new_node;
        last = *headRef;
        return;
    }
    //    while (last->next != NULL)last = last->next;
    last->next = new_node;
    last = last->next;
}
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << ' ';
        temp = temp->next;
    }
    cout << endl;
}

/* Drier program to test count function*/
int main() {
    int test;
    cin >> test;
    while (test--) {
        struct Node *head = NULL;
        int n, k;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> k;
            append(&head, k);
        }
        cin >> k;
        head = sortedInsert(head, k);
        printList(head);
    }
    return 0;
}
Node *sortedInsert(struct Node* head, int x) 
{
    // Code here
    Node *prev=head,*tmp=head;
    Node *n=new Node(x);
    if(head->data >= x)  //insert at beginning
    {
        n->next=head;
        head=n;
        return head;
    }
    while(tmp->next!=NULL) //insert at end;
        tmp=tmp->next;
    if(tmp->data<=x)
    {
        tmp->next=n;
        return head;
    }
    tmp=head;
    while(1)    //insert at middle
    {
        if(tmp->data<x)
        {
            prev=tmp;
            tmp=tmp->next;
        }
        else
        {
            prev->next=n;
            n->next=tmp;
            return head;
        }
    }
}
