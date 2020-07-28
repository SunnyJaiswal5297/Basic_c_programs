#include <iostream>
using namespace std;

int main() 
{
	int d,count=0;
    cin>>d;
    while(d--)
    {
        int r,x;
        float area,distance;
        cin>>r>>x;
        distance=100*x;
        area=(((float)22/7)*2)*((float)r);
        if(distance>=area)
            count++;
    }
    cout<<count<<endl;
    return 0;
}