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
        int a[n],b[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        int c[2*n],j=0,k=0;
        i=0;
        while(i<n && j<n)
        {
            if(a[i]==b[j])
            {
                c[k++]=a[i];
                c[k++]=b[j];
                i++;
                j++;
            }
            else if(a[i]<b[j])
            {
                c[k++]=a[i];
                i++;
            }
            else
            {
                c[k++]=b[j];
                j++;
            }
        }
        while(i<n)
        {
            c[k++]=a[i];
            i++;
        }
        while(j<n)
        {
            c[k++]=b[j];
            j++;
        }
        for(i=0;i<2*n;i++)
            cout<<c[i]<<" ";
        cout<<(c[2*n/2]+c[2*n/2-1])<<endl;
    }
    return 0;
}