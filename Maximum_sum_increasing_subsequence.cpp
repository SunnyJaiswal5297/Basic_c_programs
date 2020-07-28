#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],visited[n],i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            visited[i]=0;
        }
        int min=0,sum=0;
        while(j!=n)
        {
            for(j=0;j<n;j++)
            {
                if(a[j]<a[j+1] && !visited[j+1])
                    sum+=a[j];
                else
                {
                    sum+=a[j-1];
                    visited[j-1]=1;
                    break;
                }
            }
        }
    }
    return 0;
}