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
        char ch[n];
        for(int i=0;i<n;i++)
            cin>>ch[i];
        int freq[26]={0};
        queue<char> q;
        for(int i=0;i<n;i++)
        {
            freq[ch[i]-'a']++;
            if(freq[ch[i]-'a']==1)
            {
                if(q.empty())
                {
                    q.push(ch[i]);
                    cout<<ch[i]<<" ";
                }
                else
                {
                    cout<<q.front()<<" ";
                    q.push(ch[i]);
                }
            }
            else if(freq[ch[i]-'a']>1)
            {
                if(q.empty())
                    cout<<"-1 ";
                else
                {
                    while(!q.empty())
                    {
                        if(freq[q.front()-'a']>1)
                            q.pop();
                        else
                            break;
                    }
                    if(q.empty())
                        cout<<"-1 ";
                    else
                        cout<<q.front()<<" ";
                }
            }
        }
        if(q.empty())
            cout<<"-1";
        cout<<endl;
    }
	return 0;
}