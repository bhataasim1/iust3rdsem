/*
Question 5 in Structures
Solved using Classes
*/


#include <iostream>

using namespace std;

class Date
{
    public:
    int day , month , year;
    char temp;
    
    void getdate()
    {
        cout << "Enter the Day Month and Year (DD/MM/YY) : ";
        cin >> day >> temp >> month >> temp >> year;
    }
    
    void displaydate()
    {
        cout << "Date is : " <<day << "/" << month << "/" << year;
    }
    
};

int main()
{
    Date dmy;
    
    dmy.getdate();
    dmy.displaydate();

    return 0;
}
