/*
Create a class called time that has separate int member data for hours, minutes, and
seconds. One constructor should initialize this data to 0, and another should initialize it
to fixed values. Another member function should display it, in 11:59:59 format. The final
member function should add two objects of type time passed as arguments.
A main() program should create two initialized time objects (should they be const?) and
one that isn’t initialized. Then it should add the two initialized values together, leaving the
result in the third time variable. Finally it should display the value of this third variable.
Make appropriate member functions const.

Name :- Aasim Ashraf
*/

#include <iostream>
using namespace std;

class Time
{
    private:
        int hour , minute , second;
    public:
        Time()
        {
            hour = 0;
            minute = 0;
            second = 0;
        }
        Time(int hr, int min, int sec)
        {
            hour = hr;
            minute = min;
            second = sec;
        }
        void display() const
        {
            cout << hour << ":" << minute << ":" << second << endl;
        }
        void addTime(Time t1, Time t2)
        {
            second = t1.second + t2.second;
            if (second > 59)
            minute -= 60;
            minute ++;
            minute = t1.minute + t2.minute;

            if(minute > 59)
            minute -= 60;
            hour ++;
            hour = t1.hour + t2.hour;
        }
};

int main()
{
    const Time t1 (1, 1, 1);
    const Time t2 (2, 2, 2);
    Time t3;
    t1.display();
    t2.display();
    t3.addTime(t1 , t2);
    cout << "Sum of Boths Times is = ";
    t3.display();

    return 0;
}
