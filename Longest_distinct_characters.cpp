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
        int len=str.length();
        int arr[26],i,s=0,e=0,maxlen=0;
        memset(arr,-1,sizeof(arr));
        for(i=0;i<len;i++)
        {
            if(arr[str[i]-'a']==-1)
            {
                arr[str[i]-'a']=i;
                e++;
            }
            else
            {
                //check for wheteher this char is part of NRCS or not.
                if(arr[str[i]-'a']<s)
                {
                    arr[str[i]-'a']=i;
                    e++;
                }
                else
                {
                    s=arr[str[i]-'a']+1;
                    arr[str[i]-'a']=i;
                    e++;
                }
            }
            maxlen=max(maxlen,e-s);
        }
        cout<<max(maxlen,e-s)<<endl;
    }
    return 0;
}