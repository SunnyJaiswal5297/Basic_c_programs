#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,i;
        cin>>n;
        bool arr[n+1];
        memset(arr,true,(n+1)*sizeof(bool));
        arr[0]=arr[1]=false;
        for(i=2;i<=n;i++)
        {
            int k=2;
            if(arr[i])
            {
                while(i*k<=n)
                {
                    arr[i*k]=false;
                    k++;
                }
            }
        }
        vector<long int> vec;
        for(i=0;i<=n;i++)
            if(arr[i])
                vec.push_back(i);
        int l=0,r=vec.size()-1,f=0;
        while(l<r)
        {
            if(vec[l]+vec[r]==n)
            {
                f=1;
                cout<<vec[l]<<" "<<vec[r]<<endl;
                break;
            }
            else if(vec[l]+vec[r]<n)
                l++;
            else
                r--;
        }
        if(f==0)
            cout<<"-1\n";
    }
	return 0;
}