#include<iostream>
using namespace std;

void countDistinct(int A[], int k, int n) 
{
    int i,j,l,count,freq[k];
    for(i=0;i<=n-k;i++)
    {
        count=1;
        int freq[k]={0};
        for(j=i;j<i+k-1;j++)
        {
            for(l=j+1;l<i+k;l++)
            {
                if(A[j]==A[l])
                {
                    if(freq[l-i]==1)
                    {
                        count--;
                    }
                    freq[j-i]=freq[l-i]=1;
                    break;
                }
                else
                {
                    if(!freq[l-i])
                    {
                        count++;
                        freq[l-i]=1;
                    }
                }
            }
            cout<<count<<" "<<j<<" "<<l<<"\n ";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k;
    cin>>k;
    countDistinct(a,k,n);
}