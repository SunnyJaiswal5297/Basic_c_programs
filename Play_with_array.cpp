#include<iostream>
using namespace std;

vector<int> formatArray(vector<int> a,int n)
{
    int i;
    for(i=1;i<n;i+=2)
    {
        if(a[i]<a[i-1])
        {
            int temp=a[i];
            a[i]=a[i-1];
            a[i-1]=temp;
        }
    }
    return a;
}
int main()
{
    //write the body
}