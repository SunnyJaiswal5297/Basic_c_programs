#include<iostream>
using namespace std;
int count=0;
void merge(int a[],int l,int m,int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int left[n1],right[n2];
    for(i=0;i<n1;i++)
        left[i]=a[l+i];
    for(j=0;j<n2;j++)
        right[j]=a[m+1+j];
    i=0;j=0;k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]>=right[j])
        {
            a[k]=right[j];
            count+=n1-i;
            j++;
        }
        else
        {
            a[k]=left[i];
            i++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=left[i];
        k++;i++;
    }
    while(j<n2)
    {
        a[k]=right[j];
        k++;
        j++;
    }
}
void merge_sort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}
void printArray(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;    
}
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];
    printArray(a,n);
    merge_sort(a,0,n-1);
    printArray(a,n);
    cout<<count<<endl;
    return 0;
}