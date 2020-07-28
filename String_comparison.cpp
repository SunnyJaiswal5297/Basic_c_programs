#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str1={},str2={};
        cin>>str1>>str2;
        int len1=str1.length();
        int len2=str2.length();
        int result=0;
        int i,j;
        for(i=0,j=0;i<len1,j<len2;)
        {
            if(str1[i]=='n' && str1[i+1]=='g')
            {
                if(str2[j]=='n' && str2[j+1]=='g' && (j+1)<len2)
                {
                    result=0;
                    i+=2;j+=2;
                }
                else if(str2[j]>='o')
                {
                    result=-1;
                    break;
                }
                else
                {
                    result=1;
                    break;
                }
            }
            else if(str1[i]==str2[j])
            {
                result=0;
                i++;j++;
            }
            else if(str1[i]>str2[j])
            {
                result=1;
                break;
            }
            else
            {
                result=-1;
                break;
            }
            
        }
        if(result==0 && i<len1 && j==len2)
            cout<<result+1<<"\n";
        else
            cout<<result<<"\n";
    }
}