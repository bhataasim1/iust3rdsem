/*
Create a structure called time . Its three members, all type int , should be called hours , minutes , and seconds . Write a program that prompts the user to enter a time value 
in hours, minutes, and seconds. This can be in 12:59:59 format, or each number can be entered at a separate prompt (“Enter hours:”, and so forth). 
The program should then store the time in a variable of type struct time , and finally print out the total number of seconds represented by this time value.
*/

#include <iostream>

using namespace std;

struct Time
{
    int hours , minutes , seconds;
};

int main()
{
    Time h , m , s;
    char temp;
    cout << "Enter the Hours Minutes and Seconds (HH:MM:SS) : ";
    cin >> h.hours >> temp >> m.minutes >> temp >> s.seconds;
    
    cout << "Total in seconds : "<<h.hours <<":" <<m.minutes << ":" <<s.seconds << " are " << h.hours * 3600 + m.minutes * 60 + s.seconds;

    return 0;
}
