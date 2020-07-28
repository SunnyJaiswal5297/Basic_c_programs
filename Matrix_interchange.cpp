#include<iostream>
using namespace std;
int arr[100][100];
void interchange(int r,int c)
{
    int i;
    for(i=0;i<r;i++)
    {
        int temp=arr[i][0];
        arr[i][0]=arr[i][c-1];
        arr[i][c-1]=temp;
    }
}
int main()
{
    int r,c;
    cin>>r>>c;
    int i,j;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            cin>>arr[i][j];
    //interchange ist and last column
    interchange(r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cout<<arr[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}