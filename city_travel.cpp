#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int s,x,n;
	cin>>s>>x>>n;
    map<int,int> mp;
	while(n--)
	{
		int t,y;
        cin>>t>>y;
        mp[t]=y;
	}
    int curr_distance=0,i=1;
    while(curr_distance<s)
    {
        if(mp.find(i)!=mp.end())
        {
            curr_distance+=mp[i];
            mp.erase(i);
        }
        else
            curr_distance+=x;
        i++;
        cout<<curr_distance<<endl;
    }
    cout<<(i-1)<<endl;
	return 0;
}