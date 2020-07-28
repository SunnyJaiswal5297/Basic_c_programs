#include<iostream>
using namespace std;

string ones(int n)
{
    if(n>0)
    {
        switch(n)
        {
            case 1:return "one";
            case 2:return "two";
            case 3:return "three";
            case 4:return "four";
            case 5:return "five";
            case 6:return "six";
            case 7:return "seven";
            case 8:return "eight";
            case 9:return "nine";
        }
    }
}
string tens(int n)
{
    switch(n)
    {
        case 10: return "ten";
        case 11: return "eleven";
        case 12: return "twelve";
        case 13: return "thirteen";
        case 14: return "fourteen";
        case 15: return "fifteen";
        case 16: return "sixteen";
        case 17: return "seventeen";
        case 18: return "eighteen";
        case 19: return "nineteen";
    }
}
string tenties(int n)
{
    switch(n)
    {
        case 2: return "twenty";
        case 3: return "thirty";
        case 4: return "forty";
        case 5: return "fifty";
        case 6: return "sixty";
        case 7: return "seventy";
        case 8: return "eighty";
        case 9: return "ninety";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num,i;
        cin>>num;
        int arr[4]={0};
        string res={};
        int temp=num;i=0;
        while(temp)
        {
            arr[i++]=temp%10;
            temp/=10;
        }
        bool and_check=false;
        if(arr[3]!=0)
        {
            res=res+ones(arr[3])+" ";
            res=res+"thousand"+" ";
            and_check=true;
        }
        if(arr[2]!=0)
        {
            res=res+ones(arr[2])+" ";
            res=res+"hundred"+" ";
            and_check=true;
        }
        if((arr[1]!=0 || arr[0]!=0) && and_check==true)
            res=res+"and"+" ";
        int add_ones=0;
        if(arr[1]!=0)
        {
            if(arr[1]==1)
                res=res+tens(arr[1]*10+arr[0]);
            else
            {
                res=res+tenties(arr[1])+" ";
                if(arr[0]!=0)
                    res=res+ones(arr[0]);
            }
        }
        else
        {
            res=res+ones(arr[0]);
        }
        cout<<res<<endl;
    }
    return 0;
}