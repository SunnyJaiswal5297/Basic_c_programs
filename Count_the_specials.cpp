#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int count_specials(int arr[],int size_of_array,int res)
{
    int i,j,count1,count2=0;
    bool visited[size_of_array]={false};
    for(i=0;i<size_of_array-1;i++)
    {
        count1=1;
        for(j=i+1;(!visited[i]) && j<size_of_array;j++)
        {
            if(arr[i]==arr[j])
            {
                count1++;
                visited[j]=true;
            }
        }
        if(count1==res)
            count2++;
        visited[i]=true;
    }
    return count2;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,res,c;
        cin>>n>>k;
        int a[n];
        res = floor(n/k);
        cout<<res;
        c=count_specials(a,n,res);
        cout<<c<<" ";
        cout<<"\n";
    }
    return 0;
}