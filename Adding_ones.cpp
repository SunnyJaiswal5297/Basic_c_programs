#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,j;
        cin>>n>>k;
        int a[n]={0},b[k];
        for(i=0;i<k;i++)
            cin>>b[i];
        for(i=0;i<k;i++)
        {
            int index=b[i]-1;
            for(j=index;j<n;j++)
            {
                a[j]++;
            }
        }
        for(int l=0;l<n;l++)
            cout<<a[l]<<" ";
    }
    return 0;
}