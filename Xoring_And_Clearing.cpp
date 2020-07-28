#include<iostream>
#include<cstring>
using namespace std;

void setToZero(int arr[],int n)
{
    memset(arr,0,n*sizeof(arr[0]));
}
void printArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void xor1ToN(int arr[], int n)
{
   for(int i=0;i<n;i++)
       arr[i]=arr[i]^i;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],i;
        for(i=0;i<n;i++)
            cin>>arr[i];
        xor1ToN(arr,n);
        printArr(arr,n);
        setToZero(arr,n);
        printArr(arr,n);
    }
    return 0;
}