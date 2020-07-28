#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int c=0;
        for(int i=0;i<n;i++) 
        { 
            cin>>a[i];
            if(a[i]%2==1)
            {
                a[i] = a[i]-1;
                c++;
            }
        }
        while(1)
        {
            int f=0;
            for(int i=0;i<n;i++) 
            {
                if(a[i]!=0)
                {
                    a[i]=a[i]/2;
                    if(a[i]%2==1)
                    {
                        a[i]=a[i]-1;
                        c++;
                    }
                }
                else
                    f++;
            }
            if(f==n)
                break;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}