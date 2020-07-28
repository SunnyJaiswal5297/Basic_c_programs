#include<iostream>
using namespace std;

int main()
{
    int m,n,x;
    cin>>m>>n>>x;
    int a[m],b[n],i,j;
    for(i=0;i<m;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    int f=0;
    for(i=0;i<m;i++)
    {
        int y=x-a[i];
        for(j=0;j<n;j++)
        {
            if(b[j]==y)
            {
                f=1;
                cout<<a[i]<<" "<<b[j]<<", ";
            }   
        }
    }
    if(f==0)
        cout<<"-1\n";
    else
        cout<<"\n";
}