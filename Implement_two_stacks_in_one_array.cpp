#include<iostream>
using namespace std;

int arr[100],top1=-1,top2=100;
void push1(int num)
{
    if(top1==top2)
        exit(0);
    else
        arr[++top1]=num;
}
int pop1()
{
    if(top1==-1)
        exit(0);
    else
        return arr[top1--];
}
void push2(int num)
{
    if(top1==top2)
        exit(0);
    else
        arr[--top2]=num;
}
int pop2()
{
    if(top2==100)
        exit(0);
    else
        return arr[top2++];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
    }
}