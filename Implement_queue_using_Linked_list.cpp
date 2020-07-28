// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
};



int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyQueue *sq = new MyQueue();
        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }
}

void MyQueue:: push(int x)
{
    QueueNode *n=new QueueNode(x);
    if(front==NULL && rear==NULL)
        front=rear=n;
    else
    {
        rear->next=n;
        rear=n;
    }
}

int MyQueue :: pop()
{
    if(front==NULL)
        return -1;
    if(front==rear)
    {
        int res=front->data;
        front=NULL;
        rear=NULL;
        return res;
    }
    QueueNode *tmp=front;
    front=front->next;
    int res=tmp->data;
    free(tmp);
    return res;
}
