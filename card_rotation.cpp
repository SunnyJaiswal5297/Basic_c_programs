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
        int arr[n+1],i;
        memset(arr,0,sizeof(arr));
        queue<int> q;
        for(i=1;i<=n;i++)
            q.push(i);
        i=1;
        while(!q.empty())
        {
            int val=i;
            while(i--)
            {
                int back=q.front();
                q.pop();
                q.push(back);
            }
            int pos=q.front();
            q.pop();
            arr[pos]=val;
            i=++val;
        }
        //arr[i]=q.front();
        for(i=1;i<=n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
	return 0;
}
/*
3 4 5 6 1

*/