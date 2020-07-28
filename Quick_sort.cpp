#include<iostream>
using namespace std;

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
    int i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[h]);
    return (i+1);
}
void quicksort(int a[],int l,int h)
{
    if(l<h)
    {
        int p_index=partition(a,l,h);
        quicksort(a,l,p_index-1);
        quicksort(a,p_index+1,h);
    }
}
int main()
{
    int arr[]={10,7,8,9,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Sorted Array\n";
    quicksort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}