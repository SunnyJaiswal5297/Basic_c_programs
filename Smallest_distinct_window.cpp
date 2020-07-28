#include<bits/stdc++.h>
using namespace std;

int visited[256]={0};
int main()
{
	int t;
	cin>>t;
    cin.ignore();
	while(t--)
	{
        string str;
        cin>>str;
        int n=str.length();
        int dist_count=0,i;
        for(i=0;i<n;i++)
            if(visited[str[i]]==0)
            {
                visited[str[i]]=1;
                dist_count++;
            }
        int s=0,e=0,m=INT_MAX,k,count=0;
        int check_count[256]={0};
        for(i=0;i<n;i++)
        {
            if(visited[str[i]]==1)
            {
                check_count[str[i]]++;
                if(check_count[str[i]]==1)
                    count++;
            }
            while(dist_count==count)
            {
                e=i;
                if(e-s+1<m)
                    m=e-s+1;
                check_count[str[s]]--;
                if(check_count[str[s]]<=0)
                    count--;
                s++;   
            }
        }
        cout<<m<<endl;
    }
	return 0;
}
