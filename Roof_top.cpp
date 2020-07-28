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
        int a[n],i,max_step=0,res=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=1;i<n;)
        {
            if(a[i]>a[i-1])
            {
                max_step+=1;
                if(max_step>=res)
                    res=max_step;
                i++;
            }
            else
            {
                i++;
                max_step=0;
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}