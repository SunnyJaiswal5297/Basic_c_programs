#include<bits/stdc++.h>
using namespace std;

unordered_map<string,int> ump;
int solve(string str,int i,int j,bool val)
{
    if(i>j)
        return false;
    if(i==j)
    {
        if(val==true)
            return str[i]=='T';
        else
            return str[i]=='F';
    }
    if(ump.find(to_string(i)+" "+to_string(j)+" "+to_string(val))!=ump.end())
        return ump[(to_string(i)+" "+to_string(j)+" "+to_string(val))];
    int ans=0;   
    for(int k=i+1;k<j;k++)
    {
        int lt=solve(str,i,k-1,true);
        int lf=solve(str,i,k-1,false);
        int rt=solve(str,k+1,j,true);
        int rf=solve(str,k+1,j,false);
        if(str[k]=='|')
        {
            if(val==true)
                ans+=lt*rt+lt*rf+lf*rt;
            else
                ans+=lf*rf;
        }
        else if(str[k]=='&')
        {
            if(val==true)
                ans+=lt*rt;
            else
                ans+=lt*rf+lf*rf+lf*rt;
        }
        else if(str[k]=='^')
        {
            if(val==true)
                ans+=lt*rf+lf*rt;
            else
                ans+=lt*rt+lf*rf;
        }
    }
    return ump[(to_string(i)+" "+to_string(j)+" "+to_string(val))]=ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int i,j;
        ump.clear();
        int res=solve(str,0,n-1,true);
        cout<<res<<endl;
    }
    return 0;
}