#include<iostream>
using namespace std;

int main()
{
    int t,n,m,x,y,s,x_indices[10],y_indices[10],i,j,l,k;
    cin>>t;
    cin>>n>>m;
    int a[n][m];
    cin>>x>>y>>s;
    for(i=0;i<x && x!=0 ;i++)
        cin>>x_indices[i];
    for(i=0;i<y && y!=0 ;i++)
        cin>>y_indices[i];
    l=k=0;
    for(i=0;i<n;i++)
    {
        if(i==x_indices[l])
            for(j=0;j<m;j++)
            {
                a[i][j]=0;
            }
        l++;
    } 
    for(j=0;j<m;j++)
    {
        if(j==y_indices[k])
            for(i=0;i<n;i++)
            {
                a[i][j]=0;
            }
        k++;
    }   
    cout<<"Display:";
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cout<<" "<<a[i][j];    
        cout<<"\n";
    return 0;
}