// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long


 // } Driver Code Ends


string Reduced_String(long long k, string s)
{
    string res="";
    stack<pair<char,int>> stk;
    for(int i=0;i<s.length();i++)
    {
        if(!stk.empty() && stk.top().second==k)
        {
            char ch=stk.top().first;
            while(!stk.empty() && stk.top().first==ch)
                stk.pop();
        }
        if(!stk.empty() && stk.top().first==s[i])
        {
            int x=stk.top().second;
            stk.push(make_pair(s[i],x+1));
        }
        else
        {
            stk.push(make_pair(s[i],1));
        }
    }
    //check for last character
    if(stk.top().second==k)
    {
        char ch=stk.top().first;
        while(!stk.empty() && stk.top().first==ch)
            stk.pop();
    }
    //storing final string
    while(!stk.empty())
    {
        res=stk.top().first+res;
        stk.pop();
    }
    return res;
}


// { Driver Code Starts.

int main() {
    
    
    long long t;cin>>t;
    while(t--)
    {
        long long k;cin>>k;
        string s;cin>>s;
        cout<<Reduced_String(k,s)<<endl;
        
    }
    
	return 0;
}  // } Driver Code 
// 2
// geeksforgeeks