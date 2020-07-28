// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};

int tour(petrolPump [],int );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        cout<<tour(p,n)<<endl;
    }
}
/*
4
4 6 6 5 7 3 4 5
*/
int tour(petrolPump p[],int n)
{
    int petrol_req=0,start=0,diff=0;
    for(int i=0;i<n;i++)
    {
        diff+=p[i].petrol-p[i].distance;
        if(diff<0)
        {
            start=i+1;
            petrol_req+=diff;
            diff=0;
        }
        //cout<<start<<endl;
    }
    if(diff+petrol_req>0)
        return start;
    else
        return -1;
}
/*13
87 27 40 95 71 96 79 35 2 68 3 98 93 18 57 53 81 2 42 87 90 66 20 45 30 41
[87 27] [40 95] [71 96] [79 35] [2 68] [3 98] [93 18] [57 53] [81 2] [42 87] [90 66] [20 45] [30 41]
Expected answer is 0.
My answer is 6.
6 corresponds to truck starting at [93 18].
Manually checked it. 6 seems correct answer. Please point out my mistake.*/

