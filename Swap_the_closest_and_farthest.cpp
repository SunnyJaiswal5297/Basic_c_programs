#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        int l1=str1.length();
        int l2=str2.length();
        if(l1>=2 && l2>=2)
        {
            swap(str1[0],str2[l2-1]);
            swap(str1[l1-1],str2[0]);
            cout<<str1<<" "<<str2<<"\n";
        }
        else if(l1==1 && l2==1)
        {
            swap(str1,str2);
            cout<<str1<<" "<<str2<<"\n";
        }
    }
    return 0;
}