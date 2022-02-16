/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct timee                                     //Here i created a structure "timee"
{
    int hours , minutes , seconds;
};

void Swap(timee& time1 , timee& time2)                //created Funtction "Swap" and done simple calculation to interchange numbers 
{
    time1.hours = time1.hours + time2.hours;
    time2.hours = time1.hours - time2.hours;
    time1.hours = time1.hours - time2.hours;
    
    time1.minutes = time1.minutes + time2.minutes;
    time2.minutes = time1.minutes - time2.minutes;
    time1.minutes = time1.minutes - time2.minutes;
    
    time1.seconds = time1.seconds + time2.seconds;
    time2.seconds = time1.seconds - time2.seconds;
    time1.seconds = time1.seconds - time2.seconds;
}

int main()
{
    timee time1 , time2;
    cout << "Values for Time-1" << endl;
    cout << "Enter the Hours : ";
    cin >> time1.hours;
    
    cout << "Enter the Minutes : ";
    cin >> time1.minutes;
    
    cout << "Enter the Seconds : ";
    cin >> time1.seconds;
    
    cout << "Values for Time-2 " << endl;

    cout << "Enter the Hours : ";
    cin >> time2.hours;
    
    cout << "Enter the Minutes : ";
    cin >> time2.minutes;
    
    cout << "Enter the Seconds : ";
    cin >> time2.seconds;
    
    cout << "Before Swap (HH:MM:SS) : " << time1.hours << ":" << time1.minutes << ":" << time1.seconds << " and " << time2.hours << ":" << time2.minutes << ":" << time2.seconds << endl;

    Swap(time1 , time2);
    
    cout << "After Swap (HH:MM:SS) : " << time1.hours << ":" << time1.minutes << ":" << time1.seconds << " and " << time2.hours << ":" << time2.minutes << ":" << time2.seconds;


    return 0;
}
