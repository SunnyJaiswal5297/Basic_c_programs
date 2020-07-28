#include <bits/stdc++.h>
using namespace std;
int isValid(char *);
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        char s[10000];
        cin >> s;
        cout << isValid(s) << endl;
    }
    return 0;
}
bool is_num(string x)
{
    return (!x.empty() && (x.find_first_not_of("[0123456789]")==std::string::npos));
}

int isValid(char *ip) 
{
    vector<string> list;
    string str={};
    if(strlen(ip)>15)
        return 0;
    while((*ip)!='\0') 
    {
        if((*ip)=='.')
        {
            list.push_back(str);
            str={};
        }
        else
            str=str+(*ip);
        ip++;
    }
    if(!str.empty())
        list.push_back(str);
    if(list.size()!=4)
        return 0;
    if(list[0][0]=='0')
        return 0;
    for(auto x:list)
    {
        if(!is_num(x) || stoi(x)>255 || stoi(x)<0 || (x[0]=='0' && x.length()>1))
            return 0;
    }
    return 1;
}
//222.111.111.111 valid
//5555..555