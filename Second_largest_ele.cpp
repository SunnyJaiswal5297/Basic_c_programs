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
	    map<int,int> m;
	    for(i=0;i<n;i++)
        {
	        cin>>a[i];
            m[a[i]]++;
        }
        if(m.size()==1)
            cout<<"-1\n";
        else
        {
            int count=0;
            for(auto x:m)
            {
                if(count==m.size()-2)
                    cout<<x.first<<endl;
                count++;
            }
        }	    
    }
	return 0;
}