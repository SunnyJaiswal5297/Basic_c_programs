#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int arr1[n/2+1]={0},arr2[n/2+1]={0},j=0,k=0,flag=0;
        for(i=0;i<n;i++)
        {
            if(flag==0)
            {
                arr1[j++]=a[i];
                flag=1;
            }
            else
            {
                arr2[k++]=a[i];
                flag=0;
            }
        }
        for(i=0;i<j;i++)
            cout<<arr1[i]<<" ";
        cout<<endl;
        for(i=0;i<k;i++)
            cout<<arr2[i]<<" ";
        cout<<endl;
        j--;
        k--;
        int carry=0,res[n/2+1],index=0;
        for(i=0;i<n/2+1;i++)
            res[i]=-1;
        while(j>=0 && k>=0)
        {
            int sum=arr1[j]+arr2[k]+carry;
            if(sum>=10)
                carry=1;
            else
                carry=0;
            res[index]=sum%10;
            j--;
            k--;
            index++;
        }
        if(j==0)
            res[index++]=arr1[j]+carry;
        else if(j==-1 && k==-1 && carry==1)
            res[index++]=carry;
        bool zero_check=false;
        for(i=index-1;i>=0;i--)
        {
            if(res[i])
            {
                zero_check=true;
                cout<<res[i];
            }
            else
            {
                if(!zero_check)
                    continue;
                else
                    cout<<res[i];
            }
        }
        cout<<endl;
    }
    return 0;
}