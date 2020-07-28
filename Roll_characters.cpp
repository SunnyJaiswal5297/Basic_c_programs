#include<bits/stdc++.h>
using namespace std;

string increment(string str,int len)
{
    for(int i=0;i<len;i++)
    {
        str[i]=str[i]+1;
        if(str[i]>122)
            str[i]=(str[i]%123)+97;
    }
    return str;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            str=increment(str,a[i]);
        }
        cout<<str<<endl;
    }
    return 0;
}