// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
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



bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}

bool isPalindrome(Node *head)
{
    if(head->next==NULL)
        return 1;
    stack<int> s;
    Node *tmp=head;
    while(tmp!=NULL)
    {
        s.push(tmp->data);
        tmp=tmp->next;
    }
    while(head)
    {
        if(s.top()==head->data)
        {
            s.pop();
            head=head->next;
        }
        else
            return 0;
    }
    return 1;
}

