#include<bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(char*);

int main()
{
   
    char str[100];
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%s",str);
    cout<< getMaxOccuringChar(str)<<endl;
    }
}

char getMaxOccuringChar(char* str)
{
    int arr[256]={0},m=0;
    for(int i=0;i<strlen(str);i++)
        arr[str[i]]++;
    char res;
    for(int i=0;i<256;i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
            res=char(i);
        }
    }
    return res;
}
