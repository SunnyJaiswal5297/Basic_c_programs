#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,num,i;
        cin>>n;
        int len=pow(n,2);
        int a[len]={0};
        for(i=0;i<n;i++)
        {
            cin>>num;
            a[num]++;
        }
        for(i=1;i<len;i++)
        {
            while(a[i]--)
                cout<<i<<" ";
        }
        cout<<endl;
    }
	return 0;
}