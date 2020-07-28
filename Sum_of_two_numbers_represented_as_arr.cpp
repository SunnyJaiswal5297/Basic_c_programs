#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j;
        cin>>n>>m;
        int len=(n>=m?n:m);
        int a[len],b[len],c[len];
        if(n>=m)
        {
            for(i=0;i<len;i++)
                cin>>a[i];
            for(i=0;i<len;i++)
            {
                if(i>=len-m)
                    cin>>b[i];
                else
                    b[i]=0;
            }
        }
        else if(n<m)
        {
            for(i=0;i<len;i++)
            {
                if(i>=len-n)
                    cin>>a[i];
                else
                    a[i]=0;
            }
            for(i=0;i<len;i++)
                cin>>b[i];
        }
        for(i=0;i<len;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        for(i=0;i<len;i++)
            cout<<b[i]<<" ";
        cout<<endl;
        int carry=0;
        for(i=len-1;i>=0;i--)
        {
            if(i==0 && a[i]+b[i]>9)
                c[i]=a[i]+b[i]+carry;
            else
                c[i]=(a[i]+b[i]+carry)%10;
            if(a[i]+b[i]+carry>9)
                carry=1;
            else
                carry=0;
        }
        for(i=0;i<len;i++)
            cout<<c[i]<<" ";
        cout<<endl;
    }
    return 0;
}