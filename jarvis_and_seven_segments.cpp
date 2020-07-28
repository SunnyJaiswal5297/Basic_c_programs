#include<bits/stdc++.h>
using namespace std;
vector<long int> vec{6,2,5,5,4,5,6,3,7,6};
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long int a[n],i,m=INT_MAX,res;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
		{
			if(a[i]<=9)
            {
                if(vec[a[i]]<m)
                {
                    m=vec[a[i]];
                    res=a[i];
                }
            }
            else
            {
                long int tmp=a[i],c=0;
                while(tmp)
                {
                    c+=vec[tmp%10];
                    tmp=tmp/10;
                }
                if(c<m)
                {
                    m=c;
                    res=a[i];
                }
            }
		}
		cout<<res<<endl;
	}
	return 0;
}