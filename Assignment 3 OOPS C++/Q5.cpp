#include <iostream>

using namespace std;

long hms_to_secs(long hour, long minutes, long seconds)   // Here i declared the Function 'hms_to_secs'
{
    hour *= 60 * 60;                                     //here i used simple calculation to convert hours into Seconds
    minutes *= 60;                                      // Minutes into Seconds
    seconds = hour + minutes + seconds;
    return seconds;
}

int main()
{
    long hour , minutes, seconds;
    cout<<"Enter the Hours : ";
    cin >> hour;
    
    cout<<"Enter the Minutes : ";
    cin >> minutes;
    
    cout<<"Enter the Seconds : ";
    cin >> seconds;
    
    cout << "Total Seconds are : " <<  hms_to_secs (hour , minutes , seconds); //finally called the Function 'hms_to_secs'

    return 0;
}
