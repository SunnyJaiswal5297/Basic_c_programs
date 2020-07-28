#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,i;
        cin>>n;
        int a[n]={},num;
        for(i=0;i<n;i++)
        {
            cin>>num;
            if(num!=-1)
                a[num]++;
        }
        for(i=0;i<n;i++)
        {
            if(a[i])
                cout<<i<<" ";
            else
            {
                cout<<"-1"<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}