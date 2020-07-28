#include<bits/stdc++.h>
using namespace std;

int return_char(char c)
{
    switch (c)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int curr=-1,prev=-1,res=0;
        for(int i=a.length()-1;i>=0;i--)
        {
            int val=return_char(a[i]);
            if(curr==-1 && prev==-1)
            {
                res+=val;
                prev=val;
            }
            else
            {
                curr=val;
                if(curr>=prev)
                {
                    res=res+curr;
                }
                else
                {
                    res=res-curr;
                }
                prev=val;
            }
        }
        cout<<res<<endl;   
    }
    return 0;
}