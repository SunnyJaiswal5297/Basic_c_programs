#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int m,n,i;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(i=0;i<m;i++)
            cin>>arr1[i];
        for(i=0;i<n;i++)
            cin>>arr2[i];
        if(m<n)
            cout<<"No\n";
        else
        {
            sort(arr1,arr1+m);
            sort(arr2,arr2+n);
            int l=0,f=0;
            for(i=0;i<n;i++)
            {
                f=0;
                while(l<m)
                {
                    if(arr2[i]==arr1[l])
                    {
                        f=1;
                        l++;
                        break;
                    }
                    else if(arr2[i]>arr1[l])
                        l++;
                    else if(arr2[i]<arr1[l])
                    {
                        f=0;
                        break;
                    }
                }
                if(f==0)
                {
                    cout<<"No\n";
                    break;
                }
            }
            if(f==1)
                cout<<"Yes\n";
        }
    }
	return 0;
}