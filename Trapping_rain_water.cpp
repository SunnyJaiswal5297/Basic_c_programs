#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        int total=0;
        for(i=1;i<n-1;i++)
        {
            int mid=a[i],max1=0;
            for(j=0;j<i;j++) //finding highest on left of i
                if(a[j]>max1 && a[j]>mid)
                    max1=a[j];
            int max2=0;
            for(j=i+1;j<n;j++)  //finding highest on right of i
                if(a[j]>max2 && a[j]>mid)
                    max2=a[j];
            if(max1 > a[i] && max2 > a[i])
                total+=(max1>max2?max2:max1)-a[i];
        }
        cout<<total<<"\n";
    }
    return 0;
}