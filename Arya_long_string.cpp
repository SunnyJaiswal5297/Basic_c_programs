#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int k,n;
        cin>>k>>n;
        char ch;
        cin>>ch;
        int c=count(str.begin(),str.end(),ch);
        if(c==0)
            cout<<c<<endl;
        else
        {
            int sum=0;
            sum+=(n/str.length())*c;
            for(int i=0;i<n%str.length();i++)
                if(str[i]==ch)
                    sum++;
            cout<<sum<<endl;
        }
    }
    return 0;
}