#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q,i;
        cin>>n>>q;
        char str[n];
        for(i=0;i<n;i++)
            cin>>str[i];
        int offset=0,type;
        while(q--)
        {
            cin>>type;
            if(type==1)
            {
                int k;
                cin>>k;
                offset+=k;
            }
            else if(type==2)
            {
                int idx;
                cin>>idx;
                int index=(n-offset+idx)%n;
                cout<<str[index]<<endl;
            }
        }
    }
    return 0;
}
/*
7 5
abcdefg
1 2
2 0
2 6
1 4
2 1
*/