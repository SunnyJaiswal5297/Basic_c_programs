#include <bits/stdc++.h>
using namespace std;

void traverse_point(pair<int,int> *p,char ch)
{
    switch(ch)
    {
        case 'L':
            p->first--;
            break;
        case 'R':
            p->first++;
            break;
        case 'U':
            p->second++;
            break;
        case 'D':
            p->second--;
            break;
    }
}
int main() 
{
	string str;
	cin>>str;
	pair<int,int> p(0,0);
	for(int i=0;i<str.length();i++)
		traverse_point(&p,str[i]);
	cout<<p.first<<" "<<p.second<<endl;
	return 0;
}