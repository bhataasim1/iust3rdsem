/*
Start with the date structure in Exercise 5 in Chapter 4 and transform it into a date
class. Its member data should consist of three ints: month, day, and year. It should also
have two member functions: getdate(), which allows the user to enter a date in
12/31/02 format, and showdate(), which displays the date.

Name : Aasim Ashraf;
*/

#include <iostream>
using namespace std;

class Date
{
    private:
        int day, month, year;
        char temp;
    public:
        Date() : day(0), month(0), year(0){}

    void get_date()
    {
        cout << "Enter the Day/Month/Year : ";
        cin >> day >> temp >> month >> temp >> year;
    }
    void display()
    {
        cout << "Date Entered is (dd/mm/yy) : " << day << temp << month << temp << year << endl;
    }
};

int main()
{
    Date dmy;
    dmy.get_date();
    dmy.display();

    return 0;
}
