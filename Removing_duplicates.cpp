#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        //sort(str.begin(),str.end());
        int i,j;
        int len=str.length();
        for(i=0;i<len-1;i++)
        {
            for(j=i+1;j<len;j++)
            {
                if(str[i]==str[j])
                    str[j]='$';
            }
        }
        for(i=0;i<len;i++)
            if(str[i]!='$')
                cout<<str[i];
        cout<<"\n";
    }
    return 0;
}