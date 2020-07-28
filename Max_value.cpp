#include<iostream>
#include<algorithm>
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
        for(i=0;i<n;i++)
            cin>>a[i];
        int max=a[0],min=a[0],max_index=0,min_index=0;
        for(i=1;i<n;i++)
            if(a[i]>max)
            {
                max=a[i];
                max_index=i;
            }
         for(i=1;i<n;i++)
            if(a[i]<min)
            {
                min=a[i];
                min_index=i;
            }

        cout<<((max-max_index)-(min-min_index))<<"\n";
    }
    return 0;
}