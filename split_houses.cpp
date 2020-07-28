#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    char a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];
    //check for if two or more adjacent hosues if yes print 'NO'
    bool flag=true;
    for(i=0;i<n-1;i++)
    {
        if(a[i]=='H' && a[i+1]=='H')
        {
            flag=false;
            cout<<"NO"<<endl;
            break;
        }
    }
    if(flag)
    {
        //try to place max no of fences
        cout<<"YES"<<endl;
        for(i=0;i<n;i++)
        {
            if(a[i]=='.')
                a[i]='B';
            cout<<a[i];
        }
    }	
	return 0;
}