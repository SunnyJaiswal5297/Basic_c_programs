#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        int ones=0;
        for(i=0;i<n;i++)
            if(a[i]==1)
                ones++;
        int w=ones,count;
        int max=0;
        for(i=0;i<n-w+1;i++)
        {
            count=0;
            for(int j=i;j<i+w;j++)
            {
                if(a[j]==1)
                    count++;
            }
            if(count>max)
                max=count;
        }
        cout<<w-max<<endl;
    }
    return 0;
}