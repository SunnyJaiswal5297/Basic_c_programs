#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int m,n;
        cin>>m>>n;
        int a[m][n],i,j;
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                cin>>a[i][j];
        for(i=0;i<m;i++)
            sort(*(a+i),*(a+i)+n);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
        int arr[m],k=0,f=0;
        i=m-1,j=n-1;
        while(i>=0 && j>=0)
        {
            if(i==m-1 && j==n-1)
            {
                arr[k]=a[i][j];
                k++;
                i--;
            }
            else
            {
                if(a[i][0]>arr[k-1])
                {
                    f=1;
                    break;
                }
                else if(a[i][j]<arr[k-1])
                {
                    arr[k]=a[i][j];
                    k++;
                    i--;
                }
                else
                    j--;
            }
        }
        if(f==1)
            cout<<"0\n";
        else
        {
            for(i=0;i<k;i++)
                cout<<arr[i]<<" ";
        }
    }
	return 0;
}