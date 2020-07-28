#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
    cin.ignore();
	while(t--)
	{
        string str;
        cin>>str;
        int zero_flag=0,ones_flag=0,count=0,i=0;
        while(str[i]!='\0')
        {
            if(str[i]=='1' && ones_flag==0)
            {
                ones_flag=1;
            }
            else if(str[i]=='1' && ones_flag==1 && zero_flag==1)
            {
                count++;
                if(str[i+1]=='0' && i<=str.length()-1)
                    ones_flag=1;
                else
                    ones_flag=0;
            }
            else if(str[i]=='0')
            {
                if(ones_flag==1 || zero_flag==1)
                    zero_flag=1;
                else
                    zero_flag=0;
            }
            else if(str[i]!='0' && str[i]!='1')
            {
                ones_flag=0;
                zero_flag=0;
            }
            i++;
        }
        cout<<count<<endl;
    }
	return 0;
}