#include <bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    if (subArrayExists(arr, n))
		    cout << "Yes\n";
	    else
		    cout << "No\n";
	}
	return 0;
}

bool subArrayExists(int arr[], int n)
{
    unordered_map<int,int> ump(n);
    int curr_sum=0;
    for(int i=0;i<n;i++)
    {
        curr_sum+=arr[i];
        if(curr_sum==0)
            return 1;
        ump[curr_sum]++;
        if(ump[curr_sum]>1)
            return 1;
    }
    return 0;
}



