#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{       
    int t;
    cin>>t;
    for(int i=0;i<t;i++) 
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
        }
        int num=0;
        for(int i=n-1;i>=0;i--)
        {
            num=round((a[i]+num)/2.0);
        }
        cout<<num<<endl; 
    }
    return 0;
}