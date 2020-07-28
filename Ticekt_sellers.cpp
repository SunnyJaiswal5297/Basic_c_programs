#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int i,x;
        priority_queue<int> pq;
        for(i=0;i<n;i++)
        {
            cin>>x;
            pq.push(x);
        }
        int sum=0;
        while(k--)
        {
            sum+=pq.top();
            int num=pq.top();
            num-=1;
            pq.pop();
            pq.push(num);
        }
        cout<<sum<<endl;
    }
}
/*
6 2
5 3 5 2 4 4
*/