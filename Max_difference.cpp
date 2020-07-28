// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 



int findMaxDiff(int [], int n);

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
   	cin>>n;
   	int a[n];
   	for(int i=0;i<n;i++)
   	cin>>a[i];
   	cout<<findMaxDiff(a,n)<<endl;
   }
    return 0;
}


// } Driver Code Ends


/*You are required to complete this method */
int findMaxDiff(int a[], int n)
{
    int LS[n],RS[n],i;
    stack<int> s;
    for(i=0;i<n;i++)
    {
        if(s.empty())
            LS[i]=0;
        else
        {
            while(!s.empty() && s.top()>=a[i])
                s.pop();
            if(s.empty())
                LS[i]=0;
            else
                LS[i]=s.top();
        }
        s.push(a[i]);
    }
    while(!s.empty())
        s.pop();
    for(i=n-1;i>=0;i--)
    {
        if(s.empty())
            RS[i]=0;
        else
        {
            while(!s.empty() && s.top()>=a[i])
                s.pop();
            if(s.empty())
                RS[i]=0;
            else
                RS[i]=s.top();
        }
        s.push(a[i]);
    }
    int max_diff=0;
    for(i=0;i<n;i++)
        max_diff=max(max_diff,abs(LS[i]-RS[i]));
    return max_diff;
}
/*
7
2 4 8 7 7 9 3
*/