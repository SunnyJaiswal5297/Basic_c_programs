#include<bits/stdc++.h>
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
        int arr[26]={0};
        for(int i=0;i<str1.length();i++)
            arr[str1[i]-'a']++;
        for(int i=0;i<str2.length();i++)
            arr[str2[i]-'a']--;
        int count=0;
        for(int i=0;i<26;i++)
            count+=abs(arr[i]);
        cout<<count<<"\n";
    }
    return 0;
}