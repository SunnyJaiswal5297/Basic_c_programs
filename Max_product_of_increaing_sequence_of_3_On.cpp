#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i;
        unordered_map<int,int> ump;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            ump[a[i]]=i;
        }
        int max1,max2,max3,index1,index2,index3,max=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
                index1=i;
            }
        }
        if(index1<2)
        {
            cout<<"-1\n";
            continue;
        }
        max=0;
        for(i=0;i<index1;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
                index2=i;
            }
        }
        if(index2<1)
        {
            cout<<"-1\n";
            continue;
        }
        max=0;
        for(i=0;i<index2;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
                index3=i;
            }
        }
        if(index3<0)
        {
            cout<<"-1\n";
            continue;
        }
        cout<<a[index3]<<" "<<a[index2]<<" "<<a[index1]<<endl;
    }
    return 0;
}