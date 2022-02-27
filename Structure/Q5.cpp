/*
Create a structure of type date that contains three members: the month, the day of the
month, and the year, all of type int. (Or use day-month-year order if you prefer.) Have
the user enter a date in the format 12/31/2001, store it in a variable of type struct date,
then retrieve the values from the variable and print them out in the same format.
*/

#include <iostream>

using namespace std;

struct Date
{
    int day , month , year;
};

int main()
{
    Date dmy;
    
    cout <<"Enter the Day : ";
    cin >> dmy.day;
    
    cout <<"Enter the Month : ";
    cin >> dmy.month;
    
    cout <<"Enter the Year : ";
    cin >> dmy.year;
    
    cout << "Date is : " <<dmy.day << "/" << dmy.month << "/" << dmy.year;

    return 0;
}
