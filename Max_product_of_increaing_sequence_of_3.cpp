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
        int a[n],b[n],i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int left_min[n],right_max[n];
        set<int> s; 
        set<int>::iterator it; 
        for(int i = 0; i < n; i++) 
        { 
            s.insert(a[i]); 
            it = s.lower_bound(a[i]); 
            if (it == s.begin()) 
            { 
                left_min[i]=-1;
            } 
            else 
            { 
                it--; 
                left_min[i]=*it;
            } 
        }   
        right_max[n-1]=-1;
        int max1=a[n-1];
        for(i=n-2;i>=0;i--) 
        {
            if(a[i]>max1)
            {
                max1=a[i];
                right_max[i]=-1;
            }
            else
                right_max[i]=max1;
        }
        for(i=0;i<n;i++)
            cout<<left_min[i]<<" ";
        cout<<endl;
        for(i=0;i<n;i++)    
            cout<<right_max[i]<<" ";
        cout<<endl;
        int f=0,m=1;
        for(i=0;i<n;i++)
        {
            if(left_min[i]==-1 || right_max[i]==-1)
                continue;
            else
            {
                m=max(m,left_min[i]*a[i]*right_max[i]);
                f=1;
            }
        }
        if(f==0)
            cout<<"Not present\n";
        else
            cout<<m<<endl;
    }
    return 0;
}