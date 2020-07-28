#include <iostream>
using namespace std;

int main() 
{
	long int n;
    cin>>n;
    long long int a[n],i,sum[n],s1=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        s1+=a[i];
        sum[i]=s1;
    }
    long long int max_sum=INT64_MIN;
    for(i=1;i<=n;i++)
    {
        long long int s2=0,l,j,diff;
        l=i;j=l+2;diff=j-l;
        s2+=a[i];
        while(j<=n)
        {
            // cout<<s2<<" "<<sum[l]<<" "<<sum[j]<<endl;
            s2+=sum[j]-sum[l];
            // cout<<s2<<endl;
            l=j;
            diff++;
            j=l+diff;
        }
        max_sum=max(max_sum,s2);
    }
    cout<<max_sum<<endl;
	return 0;
}