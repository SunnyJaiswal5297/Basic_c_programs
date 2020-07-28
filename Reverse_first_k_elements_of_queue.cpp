// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long
queue<ll> modifyQueue(queue<ll> q, int k);
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n,k;
        cin>>n>>k;
        queue<ll> q;
        while(n-->0){
            ll a;
            cin>>a;
            q.push(a);
        }
        queue<ll> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}// } Driver Code Ends


//User function Template for C++

queue<ll> modifyQueue(queue<ll> q, int k)
{
    //add code here.
    if(k==1)
        return q;
    stack<ll> s;
    int count=k,rem=q.size()-k;
    while(count--)
    {
        ll num=q.front();
        s.push(num);
        q.pop();
    }
    queue<ll> temp;
    while(rem--)
    {
        ll num=q.front();
        temp.push(num);
        q.pop();
    }
    if(q.empty())
    {
        while(!s.empty())
        {
            q.push(s.top());
            s.pop();
        }
        while(!temp.empty())
        {
            q.push(temp.front());
            temp.pop();
        }
    }
    return q;
}
/*
5 3
1 2 3 4 5
*/