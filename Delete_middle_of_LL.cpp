// { Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
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

void append(struct Node **head_ref, struct Node **tail_ref, int new_data) {
    struct Node *new_node = new Node(new_data);
    new_node->next = NULL;

    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

/* Function to get the middle of the linked list*/
struct Node *deleteMid(struct Node *head);

void printList(Node *head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

/* Driver program to test above function*/
int main() {
    int T, i, n, l;

    cin >> T;

    while (T--) {
        struct Node *head = NULL, *tail = NULL;

        cin >> n;
        for (i = 1; i <= n; i++) {
            cin >> l;
            append(&head, &tail, l);
        }

        head = deleteMid(head);
        printList(head);
    }
    return 0;
}

Node* deleteMid(Node* head) 
{
    Node *slow=head;
    Node *fast=head,*prev=head;
    if(head==NULL)
        return head;
    if(head->next==NULL)
        return NULL;
    while(fast && fast->next)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    prev->next=slow->next;
    return head;
}