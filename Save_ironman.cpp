#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        transform(str.begin(),str.end(),str.begin(),::toupper);
        int i,j,f=0;;
        int len=str.length();
        for(i=0,j=len-1;i<j;i++,j--)
        {
            if(str[i]>='A' && str[i]<='Z' && str[j]>='A' && str[j]<='Z')
                if(str[i]==str[j])
                    f=0;
                else
                {
                    f=1;
                    break;
                }
        }
        if(f==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}