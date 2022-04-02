#include <iostream>
#include <cstring>
using namespace std;

class time24
{
    private:
        int hour , minute , second;
    public:
        time24() : hour(0) , minute(0) , second(0){}
    time24(int hr , int min , int sec)
    {
        hour = hr;
        minute = min;
        second = sec;
    }
    int getHour()
    {
        return hour;
    }
    int getMinute()
    {
        return minute;
    }
    int getSecond()
    {
        return second;
    }
    void diaplay_time24()
    {
        cout << hour << ":" << minute <<":" << second << endl;
    }
};

class time12
{
    private:
        int hour , minute ,second;
        bool pm;
    public:
        time12() : hour(0) , minute(0) , second(0){}
    time12(int hr, int min , int sec, char *a)
    {
        hour = hr;
        minute = min;
        second = sec;
        if(strcmp((a) , "PM") == 0)
        pm = 1;
        else
        pm = 0;
    }
    time12 (time24 t)
    {
        hour = t.getHour() % 12;
        minute = t.getMinute();
        second =  t.getSecond();
        pm = static_cast <bool> (t.getHour() / 12);
    }
    
    operator time24()
    {
        int hr = pm ? hour + 12 : hour;
        int min = minute;
        int sec = second;
        return time24(hr , min, sec);
    }
    void diaplay_time12()
    {
        cout << hour << ":" << minute << ":" << second << " PM" << endl;
    }
};

int main() {
    time24 t24(14 , 20 , 35);
    time12 t12;
    t12 = t24;
    cout << "Time in 24 Hours is \n";
    t24.diaplay_time24();
    cout << "\n Time in 12 Hours \n";
    t12.diaplay_time12();
    
    time12 a12(4 , 50 , 59 , "PM");
    time24 a24;
    a24 = a12;
    cout << "Time in 12 Hours \n";
    a12.diaplay_time12();
    cout << "\n Time in 12 Hours \n";
    a24.diaplay_time24();

    return 0;
}
