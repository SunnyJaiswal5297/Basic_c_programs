#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        int cut[3];
        for(int i=0;i<3;i++)
            cin>>cut[i];
        sort(cut,cut+3);
        int dp[n+1];
        dp[0]=-1;
    }
	return 0;
}