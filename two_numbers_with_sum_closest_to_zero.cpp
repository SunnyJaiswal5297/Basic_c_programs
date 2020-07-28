#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        int result=99999;
        if(a[0]>0)
            result=a[0]+a[1];
        else if(a[n-1]<0)
            result=a[n-1]+a[n-2];
        else
        {
            int k=0;
            while(1)
            {
                if(a[k]>0)
                    break;
                k++;
            }
            int x=k-1;
            while(x>=0 && k<n)
            {
                int min=a[x]+a[k],f,g;
                if(abs(min)<abs(result))
                {
                    result=min;
                    f=x;g=k;
                }
                else if(abs(min)==abs(result))
                {
                    if((abs(a[x])+abs(a[k]))>(abs(a[f])+abs(a[g])))
                    {
                        result=min;
                    }
                    f=x;g=k;
                }
                if(min<0)
                    k++;
                else
                    x--;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}