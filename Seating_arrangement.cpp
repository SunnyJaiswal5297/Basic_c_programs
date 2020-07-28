#include<bits/stdc++.h>
using namespace std;

//check if its window or not :
pair<int,string> seatArrangement(int seat_number)
{
    int seat;
    string type="";
    if(seat_number % 6==0 || seat_number %6==1)
    {
	    //check for opposite seat
        if(seat_number % 6==0)
        {
            if((seat_number/6)%2!=0)
                seat=seat_number+1;
            else
                seat=6*((seat_number/6)-2)+1;
        }
        if(seat_number % 6==1)
        {
            if((seat_number/6)%2==0)
                seat=6*((seat_number/6)+2);
            else
                seat=6*(seat_number/6);
        }
        type="WS";			
    }
    //check for middleseat
    else if(seat_number%6==2 || seat_number%6==5)
    {
        if(seat_number%6==2)
        {
            if((seat_number/6)%2==0)
                seat=(6*((seat_number/6)+2))-1;
            else
                seat=(6*(seat_number/6))-1;	
        }
        else
        {
            if((seat_number/6)%2==0)
                seat=(6*((seat_number/6)+1))+2;
            else
                seat=(6*((seat_number/6)-1))+2;
        }
        type="MS";
    }
    //Check for AS seat
    else if(seat_number%6==3 || seat_number%6==4)
    {
        if(seat_number%6==3)
        {
            if((seat_number/6)%2==0)
                seat=seat_number+7;
            else
                seat=seat_number-5;
        }
        else
        {
            if((seat_number/6)%2==0)
                seat=seat_number+5;
            else
                seat=seat_number-7;
        }
        type="AS";
    }
    return make_pair(seat,type);
} 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int seat_number;
        cin>>seat_number;
        pair<int,string> res=seatArrangement(seat_number);
        cout<<res.first<<" "<<res.second<<endl;
    }
    return 0;
}