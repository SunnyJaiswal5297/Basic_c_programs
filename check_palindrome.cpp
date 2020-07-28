#include<bits/stdc++.h>
using namespace std;
#define max 1000000007

int main()
{
    string str;
    cin>>str;
    int l=0,r=str.length()-1;
    bool flag=false;
    while(l<r)
    {
        if(str[l]==str[r])
        {
            flag=true;
            l++;
            r--;
        }
        else
        {
            flag=false;
            break;
        }
    }
    if(flag)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}