#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
    cin.ignore();
	while(t--)
	{
        int n,i;
        cin>>n;
        string str[n];
        for(i=0;i<n;i++)
        {
            cin>>str[i];
        }
        
        for(i=0;i<n;i++)
            cout<<str[i]<<"\n";
        int min=str[0].length();
        for(i=1;i<n;i++)
        {
            if(str[i].length()<min)
                min=str[i].length();
        }
        char ch=str[0][0];
        int len=0,j=0;
        while(min--)
        {
            int f=0;
            for(i=0;i<n;i++)
            {
                if(str[i][j]!=ch)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                len++;
                cout<<ch;
                j++;
                ch=str[0][j];
            }
        }
        if(len==0)
            cout<<"-1\n";
    }
	return 0;
}