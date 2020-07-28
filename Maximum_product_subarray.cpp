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
        for(i=0;i<n;i++)
            cin>>a[i];
        long long int max_pro=a[0];
        long long int max_val=a[0];
        long long int min_val=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]<0)
            {
                int temp=min_val;
                min_val=max_val;
                max_val=temp;
            }
            max_val=a[i]>max_val*a[i]?a[i]:max_val*a[i];
            min_val=a[i]>min_val*a[i]?min_val*a[i]:a[i];
            max_pro=max_pro>max_val?max_pro:max_val;
        }
        cout<<max_pro<<"\n";
    }
    return 0;
}