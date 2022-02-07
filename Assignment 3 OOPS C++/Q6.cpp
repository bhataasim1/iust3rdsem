#include <iostream>

using namespace std;

struct timee  // Created a Structure 'timee'
{
    int  hour, minute, second;
};

long time_to_secs(timee time1)      // Created Function "time_to_secs"
{
    return time1.hour * 3600 + time1.minute * 60 + time1.second;     // Here Calculated the Time in Seconds
}

timee secs_to_time(long a)   // Here i created another Function to convert Input Seconds to Time Format like "HH:MM:SS"
{
    int hh , mm , ss;
    timee time2;
    
    mm = a / 60;        // Minutes = Seconds entered divide by 60
    ss = a % 60;        // Seconds = Remaining Seconds Modulus 60
    hh = mm / 60;       // Hours   = Remaining Seconds divide by 60
    mm = mm % 60;       // Minutes = Remaining Seconds Modulus 60
    
    time2.hour = hh;
    time2.minute = mm;
    time2.second = ss;
    
    return time2;
}

int main()
{
    timee time1, time2;
    long sectime;
    
    cout << "Enter Hours : ";
    cin >> time1.hour;
    
    cout << "Enter Minutes : ";
    cin >> time1.minute;
    
    cout << "Enter Seconds : ";
    cin >> time1.second;
    
    cout << "Equivalent to seconds : " << time_to_secs(time1) << endl;
    
    cout << "Enter the Seconds : ";
    cin >> sectime;
    
    time2 = secs_to_time(sectime);
    
    cout << "Equivalent in HH:MM:SS is : " << time2.hour << ":" << time2.minute << ":" << time2.second << endl;
    

    return 0;
}
