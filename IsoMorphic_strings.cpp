#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

bool areIsomorphic(string, string);

int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        cout<<areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}

bool areIsomorphic(string str1, string str2)
{
    char arr1[26],arr2[26];
    memset(arr1,'0',sizeof(arr1));
    memset(arr2,'0',sizeof(arr2));
    int i;
    if(str1.length()!=str2.length())
        return 0;
    for(i=0;i<str1.length();i++)
    {
        if(arr1[str1[i]-'a']=='0' && arr2[str2[i]-'a']=='0')
        {
            arr1[str1[i]-'a']=str2[i];
            arr2[str2[i]-'a']=str1[i];
        }
        else if(arr1[str1[i]-'a']==str2[i] || arr2[str2[i]-'a']==str1[i])
            continue;
        else
            return 0;
        //cout<<arr1[str1[i]-'a']<<" "<<arr2[str2[i]-'a']<<endl;
    }
    return 1;
}
/*  aab
    xyz*/