#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) 
{
    int n=s.length();
    string time_phase,hour,res;
    time_phase.insert(time_phase.begin(),s.begin()+8,s.end());
    hour.insert(hour.begin(),s.begin(),s.begin()+2);
    int hr;
    if(time_phase=="PM" && hour!="12")
        hour=to_string(stoi(hour)+12);
    if(time_phase=="AM" && hour=="12")
        hour="00";
    res.insert(res.begin(),s.begin(),s.end()-2);
    res.replace(res.begin(),res.begin()+2,hour);
    return res;
}
//07:05:45PM

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
