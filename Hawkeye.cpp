#include <iostream>
using namespace std;

int main() 
{
	int n;
    cin>>n;
    long int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            a[i][j]=0;
    long int i,j,p;
    cin>>i>>j>>p;
    for(int x=0;x<n;x++)
    {
        for(int y=0;y<n;y++)
        {
            int pow=p-max(abs(i-x),abs(j-y));
            if(pow<0)
                a[x][y]=0;
            else
                a[x][y]=pow;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }   
}
/*
0 0 0 0 0 0 0 
0 1 1 1 1 1 0 
0 1 2 2 2 1 0 
0 1 2 3 2 1 0 
0 1 2 2 2 1 0 
0 1 1 1 1 1 0 
0 0 0 0 0 0 0
*/