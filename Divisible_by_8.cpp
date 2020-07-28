#include<iostream>
using namespace std;

int divisible_by_8(string s)
{
    int n;
    n=s.length();
    if(n==0)
        return -1;
    else if(n==1)
        return ((s[0]-'0')%8==0?1:-1);
    else if(n==2)
        return ( ((s[n-2]-'0')*10 + (s[n-1]-'0'))%8==0?1:-1);
    else
        return (((s[n-3]-'0')*100 + (s[n-2]-'0')*10 + (s[n-1]-'0'))%8==0?1:-1);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        cout<<divisible_by_8(str)<<"\n";
    }
    return 0;
}
