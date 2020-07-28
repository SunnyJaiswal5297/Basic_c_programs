#include<iostream>
using namespace std;

int count(string a,string b,int n,int m)
{
    //base cases
    if((n==0 && m==0) || (m==0))
        return 1;
    else if(n==0)
        return 0;
    else if(a[n-1]==b[m-1])
        return count(a,b,n-1,m-1)+count(a,b,n-1,m);
    else
        return count(a,b,n-1,m);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        /*int m,n;
        cin>>m>>n;*/
        string a,b;
        cin>>a;
        cin>>b;
        cout<<count(a,b,a.size(),b.size())<<endl;
    }
    return 0;
}