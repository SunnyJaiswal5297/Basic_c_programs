#include <bits/stdc++.h>
using namespace std;

void findUnion(int arr1[], int arr2[], int n, int m)
{
    int i=0,j=0;
    int arr3[n+m]={0},k=0;
    while(i<n && j<m)
    {
        if(arr1[i]==arr2[j])
        {
            if(k==0)
                arr3[k++]=arr1[i];
            else if(k>=1 && arr3[k-1]!=arr1[i])
                arr3[k++]=arr1[i];
            i++;
            j++;
        }
        else if(arr1[i]>arr2[j])
        {
            if(k==0)
                arr3[k++]=arr2[j];
            else if(k>=1 && arr3[k-1]!=arr2[j])
                arr3[k++]=arr2[j];
            j++;
        }
        else
        {
            if(k==0)
                arr3[k++]=arr1[i];
            else if(k>=1 && arr3[k-1]!=arr1[i])
                arr3[k++]=arr1[i];
            i++;
        }
    }
    while(i<n)
    {
        arr3[k++]=arr1[i];
        i++;
    }
    while(j<m)
    {
        if(k>=1 && arr3[k-1]!=arr2[j])
            arr3[k++]=arr2[j];
        j++;
    }
    for(i=0;i<n+m;i++)
        if(arr3[i])
            cout<<arr3[i]<<" ";
}
int main() 
{	
	int T;
	cin >> T;	
	while(T--)
    {       
	    int N, M;
	    cin >>N >> M;
	    int arr1[N];
	    int arr2[M];
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    findUnion(arr1,arr2, N, M);
        cout<<endl;
	}
	return 0;
} 