#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct object
{
    int old_val;
    int new_val;
};
int return_digits(int x)
{
    int count=0;
    while(x)
    {
        x=x/10;
        count++;
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        object a[n];
        for(i=0;i<n;i++)
            cin>>a[i].old_val;
        //find largest number
        int max=a[0].old_val;
        for(i=1;i<n;i++)
        {
            if(a[i].old_val>max)
                max=a[i].old_val;
        }
        int len=return_digits(max)+1;
        //truncate procedure
        for(i=0;i<n;i++)
        {
            string temp=to_string(a[i].old_val);
            if(temp.length()==1)
            {
                string new_temp={};
                int k=len;
                while(k--)
                {
                    new_temp+=temp;
                }
                a[i].new_val=stoi(new_temp);
            }
            else
            {
                string new_temp={};
                int k=len;j=0;
                int s=temp.length();
                while(k--)
                {
                    new_temp+=temp[(j++)%s];
                }
                a[i].new_val=stoi(new_temp);
            }
        }
        //sorting the structure
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i].new_val<a[j].new_val)
                {
                    int temp=a[i].new_val;
                    a[i].new_val=a[j].new_val;
                    a[j].new_val=temp;
                    temp=a[i].old_val;
                    a[i].old_val=a[j].old_val;
                    a[j].old_val=temp;
                }
            }
        }
        for(i=0;i<n;i++)
            cout<<a[i].old_val;
        cout<<"\n";
    }
    return 0;
}