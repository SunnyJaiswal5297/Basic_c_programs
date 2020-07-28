#include <iostream>
using namespace std;

    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            int arr[n],b[n];
            for(int i=0; i<n; i++) 
            {
                cin>>arr[i];
                b[i]=arr[i];
            }
            int j=0;
            for(int i=0; i<n; i++)
            {
                if(arr[i]%2==0 && j<n)
                {
                    b[j]=arr[i];
                    j=j+2;
                }
            }
            j=1;
            for(int i=0;i<n;i++)
            {
                if(arr[i]%2!=0 && j<n)
                {
                    b[j]=arr[i];
                    j=j+2;
                }
            }
            for(int i=0;i<n;i++)
                cout<<b[i]<<" ";
                cout<<endl;
        }
        return 0;
    }