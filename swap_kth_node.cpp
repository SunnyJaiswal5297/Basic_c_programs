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



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
    return (before[K-1] == after[num - K]) && (before[num-K] == after[K-1]);
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

// Should swap Kth node from beginning and Kth
// node from end in list and return new head.
Node *swapkthnode(Node* head, int num, int k)
{
    if(k>num)
        return head;
    if(2*k-1==num)
        return head;
    int count=1;
    Node *tmp1=head,*prev1=NULL;
    while(count!=k)
    {
        prev1=tmp1;
        tmp1=tmp1->next;
        count++;
    }
    count=1;
    Node *tmp2=head,*prev2=NULL;
    while(count!=(num-k+1))
    {
        prev2=tmp2;
        tmp2=tmp2->next;
        count++;
    }
    if(prev1)
        prev1->next=tmp2;
    if(prev2)
        prev2->next=tmp1; 
    Node *temp=tmp1->next;
    tmp1->next=tmp2->next;
    tmp2->next=temp;
    if(k==1)
        head=tmp2;
    if(k==num)
        head=tmp1;
    return head;
}
/*
5 3
1 2 3 4 5
*/
