#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;		
    int a[n],b[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    int m=INT_MAX;
    for(i=0;i<n;i++)
        m=min(m,a[i]);
    int count=0;
    bool flag=true;
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
            continue;
        while(a[i]>m)
        {
            if(a[i]>b[i])
            {
                a[i]-=b[i];
                count++;
            }
            if(a[i]<=m)
                break;
        }
        if(a[i]<m)
        {
            flag=false;
            break;
        }
    }
    if(flag)
        cout<<count<<endl;
    else
        cout<<"-1"<<endl;
	return 0;
}