#include <bits/stdc++.h>
using namespace std;
struct rock
{
	int x,y,rad;
    bool visited=false;
};

bool compare(struct rock r1,struct rock r2)
{
    if(r1.rad==r2.rad)
        return r1.y<r1.y;
    return (r1.rad>r2.rad);
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		rock r[n];
		for(int i=0;i<n;i++)
			cin>>r[i].x>>r[i].y>>r[i].rad;
        int a,b,count=INT_MAX;;
        cin>>a>>b;
        sort(r,r+n,compare);
        int covered=0;
        for(int i=0;i<n;i++)
        {
            if(r[i].y>=b && r[i].y<=a)

        }
	}
	return 0;
}