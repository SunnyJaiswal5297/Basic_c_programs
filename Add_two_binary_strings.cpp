#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1;
        cin>>str2;
        int n=str1.length();
        int m=str2.length();
        int len=n>m?n:m;
        int a[len],b[len],i,k=len-1;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(i=n-1;i>=0;i--)
            a[k--]=str1[i]-'0';
        k=len-1;
        for(i=m-1;i>=0;i--)
            b[k--]=str2[i]-'0';
        for(i=0;i<len;i++)
            cout<<a[i];
        cout<<endl;
        for(i=0;i<len;i++)
            cout<<b[i];
        cout<<endl;
        int carry=0;
        string res={};
        for(i=len-1;i>=0;i--)
        {
            if(a[i]!=b[i])
            {
                if(carry==1)
                    res='0'+res;
                else
                    res='1'+res;
            }
            else if(a[i]==b[i])
            {
                if(carry==1)
                    res='1'+res;
                else
                    res='0'+res;
                if(a[i]==1 && b[i]==1)
                    carry=1;
                else
                    carry=0;
            }
        }
        if(carry)
            res='1'+res;
        cout<<res<<endl;
    }
    return 0;
}