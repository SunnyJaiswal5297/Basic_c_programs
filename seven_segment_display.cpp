#include <iostream>
using namespace std;
int req[]={6,2,5,5,4,5,6,3,7,6};

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		string num,res="";
        cin>>num;
        int no_of_matchsticks=0;
        for(int i=0;i<num.length();i++)
            no_of_matchsticks+=req[num[i]-'0'];
        // cout<<no_of_matchsticks<<endl;
        if(no_of_matchsticks%2==0)
        {
            for(int i=0;i<no_of_matchsticks/2;i++)
                res+='1';
        }
        else
        {
            res+='7';
            no_of_matchsticks-=3;
            for(int i=0;i<no_of_matchsticks/2;i++)
                res+='1';
        }
        cout<<res<<endl;
	}
	return 0;
}