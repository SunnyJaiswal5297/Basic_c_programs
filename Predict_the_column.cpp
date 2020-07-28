#include<iostream>
using namespace std;

int M[100][100];
int columnWithMaxZeros(int);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>M[i][j];
        cout<<columnWithMaxZeros(n)<<endl;
    }
    return 0;
}
int columnWithMaxZeros(int n)
{
    int i,j,count,max=0,index=-1;
    for(j=0;j<n;j++)
    {
        count=0;
        for(i=0;i<n;i++)
        {
            if(M[i][j]==0)
                count++;
        }
        if(count>max)
        {
            max=count;
            index=j;
        }
        cout<<max<<" "<<count<<" "<<j<<"\n";
    }
    return index;
}