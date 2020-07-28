#include <bits/stdc++.h>
using namespace std;

long long int countSubarrWithEqualZeroAndOne(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<< countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}
long long int countSubarrWithEqualZeroAndOne(int a[], int n)
{
    unordered_map<int,int> mp;
    int sum=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
            a[i]=-1;
        else
            a[i]=1;
        sum+=a[i];
        if(sum==0)
            count++;
        if(mp.find(sum)!=mp.end())
        {
            count+=mp.find(sum)->second;
        }
        mp[sum]++;
    }
    return count;
}