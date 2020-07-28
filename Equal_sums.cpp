#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1],left[n+1],right[n+1],i;
        for(i=1;i<=n;i++)
            cin>>a[i];
        int l=1,r=n,left_sum=0,right_sum=0;
        left_sum+=a[l];
        right_sum+=a[r];
        int index_pos;
        while(l<r && r-l>1)
        {
            if(left_sum==right_sum)
            {
                l++;
                left_sum+=a[l];
                r--;
                right_sum+=a[r];
            }
            else if(left_sum>right_sum)
            {
                r--;
                right_sum+=a[r];
            }
            else
            {
                l++;
                left_sum+=a[l];
            }
            cout<<left_sum<<" "<<right_sum<<endl;
        }
        cout<<left_sum<<" "<<right_sum<<endl;
        int s1=0,s2=0;
        for(i=1;i<=l;i++)
            s1+=a[i];
        for(i=l+1;i<=n;i++)
            s2+=a[i];
        cout<<abs(s1-s2)<<" "<<l+1<<" "<<(s1<=s2?1:2)<<endl;
    }
    return 0;
}