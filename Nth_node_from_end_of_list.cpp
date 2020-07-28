#include <stdio.h>
#include <stdlib.h>
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


int getNthFromLast(struct Node* head, int n);


int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int d1;
        cin>>d1;
        head = new Node(d1);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }

        printf("%d", getNthFromLast(head, k));
        cout << endl;
    }
    return 0;
}

int getNthFromLast(Node *head, int k)
{
    int n=0;
    Node *tmp=head;
    while(tmp!=NULL)
    {
        n++;
        tmp=tmp->next;
    }   
    int pos=n-k;
    if(k>n)
        return -1;
    tmp=head;
    while(pos)
    {
        tmp=tmp->next;
        pos--;
    }
    return tmp->data;
}
/*
9 2
1 2 3 4 5 6 7 8 9
*/

