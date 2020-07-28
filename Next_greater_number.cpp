#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int n,i;
        cin>>n;
        string str=to_string(n);
        int f=0;
        for(i=str.length()-1;i>0;i--)
        {
            if(str[i]-'0'>str[i-1]-'0')
            {
                f=1;
                i=i-1;
                break;
            }
        }
        if(f==0)
            cout<<"not possible\n";
        else
        {
            int d=i,e,min=9;
            for(i=d+1;i<str.length();i++)
            {
                int diff;
                if(str[i]-'0'>str[d]-'0')
                    diff=(str[i]-'0')-(str[d]-'0');
                if(diff<min)
                {
                    e=i;
                    min=diff;
                }
            }
            swap(str[d],str[e]);
            sort(str.begin()+d+1,str.end());
            cout<<str<<"\n";
        }
    }
    return 0;
}