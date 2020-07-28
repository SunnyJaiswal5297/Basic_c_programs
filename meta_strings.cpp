#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        string str1,str2;
        cin>>str1;
        cin>>str2;
        int no_of_swaps=0;
        for(int i=0;i<str1.length();i++)
        {
            if(str1[i]!=str2[i])
                no_of_swaps++;
        }
        if(no_of_swaps==2)
            cout<<"1\n";
        else
            cout<<"0\n";
    }
	return 0;
}