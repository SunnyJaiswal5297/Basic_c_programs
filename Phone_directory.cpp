#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        string str[n];
        bool rejected[n]={false};
        for(i=0;i<n;i++)
            cin>>str[i];
        string str1;
        cin>>str1;
        sort(str,str+n);
        /*for(i=0;i<n;i++)
            cout<<str[i];*/
        for(i=0;i<str1.length();i++)
        {
            int f=0;
            set<string> s;
            for(j=0;j<n;j++)
            {
                if(i<str[j].length() && str1[i]==str[j][i] && !rejected[j])
                {
                    f=1;
                    s.insert(str[j]);
                }
                else
                    rejected[j]=true;
            }
            if(f==0)
            {
                break;
            }
            else
            {
                for(auto x:s)
                    cout<<x<<" ";
                cout<<endl;
            }
        }
        for(int k=i;k<str1.length();k++)
            cout<<"0\n";
    }
}