#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
Node* middle(Node* head) 
{
    if (head==NULL || head->next==NULL) 
    {
        return head;
    }
    Node* fast=head;
    Node* slow=NULL;
    while (fast && fast->next) 
    {
        fast = fast->next->next;
        slow = slow?slow->next:head;
    }
    if (fast==NULL) 
    {
        Node* temp = slow->next;
        slow->next = NULL;
        return temp;
    }
    else 
    {
        Node* temp = slow->next->next;
        slow->next->next = NULL;
        return temp;
    }
}


Node* merge(Node* left, Node* right) 
{
    if (left==NULL) 
    {
        return right;
    }
    else if (right==NULL) 
    {
        return left;
    }
    if (left->data<=right->data) 
    {
        left->next = merge(left->next,right);
        return left;
    }
    else 
    {
        right->next = merge(left,right->next);
        return right;
    }
}


Node* mergeSort(Node* head) 
{
    if (head==NULL || head->next==NULL) 
    {
        return head;
    }
    Node* mid = middle(head);
    Node* l = mergeSort(head);
    Node* r = mergeSort(mid);
    head = merge(l,r);
    return head;
}

void push(struct Node** head_ref, int new_data) 
{
    Node* new_node = new Node(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        a = mergeSort(a);
        printList(a);
    }
    return 0;
}  // } Driver Code Ends