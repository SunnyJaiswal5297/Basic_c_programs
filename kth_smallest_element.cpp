#include<iostream>
using namespace std;
int partition(int a[],int l,int h);
void printArray(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int a[],int l,int h)
{
    int pivot=a[h];
    int i=l;
    for(int j=l;j<=h-1;j++)
    {
        if(a[j]<=pivot)
        {
            swap(&a[i],&a[j]);
            i++;
        }
    }
    swap(&a[i],&a[h]);
    return i;
}
int printKthsmallest(int a[],int l,int h,int k)
{
    if(k>0 && k<=h-l+1)
    {
        int pos=partition(a,l,h);
        if(pos+1==k)
            return a[pos];
        if(pos+1>k)
            return printKthsmallest(a,l,pos-1,k);
        return printKthsmallest(a,pos+1,h,k);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>k;
        cout<<printKthsmallest(a,0,n-1,k);
    }
    return 0;
}