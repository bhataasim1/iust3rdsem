/*
 Extend the employee class of Exercise 4 to include a date class (see Exercise 5) and an
etype enum (see Exercise 6 in Chapter 4). An object of the date class should be used to
hold the date of first employment; that is, the date when the employee was hired. The
etype variable should hold the employee’s type: laborer, secretary, manager, and so on.
These two items will be private member data in the employee definition, just like the
employee number and salary. You’ll need to extend the getemploy() and putemploy()
functions to obtain this new information from the user and display it. These functions will
probably need switch statements to handle the etype variable. Write a main() program that
allows the user to enter data for three employee variables and then displays this data.

Name : Aasim Ashraf;
*/

#include<iostream>
using namespace std;

enum etype
{
    laborer,
    secretary,
    manager,
    accountant,
    executive,
    researcher
};

class Date
{
    private:
        int day, month, year;
        char temp;
    public:
        void get_date()
        {
            cout << "Enter the Joining Date of Employe (DD/MM/YY) : ";
            cin >> day >> temp >> month >> temp >> year;
        }
        void display_date()
        {
            cout << "Joining Date is : " << day << temp << month << temp << year << endl;
        }
};
class Employe
{
    private:
        int emp_no;
        float emp_comp;
        Date dmy;
        etype etype1;
    public:
    char type;

        void get_emp()
        {
            cout << "Enter Employe Number : ";
            cin >> emp_no;

            cout << "Enter Employe Compansation : ";
            cin >> emp_comp;

            dmy.get_date();
            
            cout << "Enter the Employe Type (l, s, m, a, e, r) : ";
            cin >> type;

            switch (type)
            {
            case 'l': etype1 = laborer; break;
            case 's': etype1 = secretary; break;
            case 'm': etype1 = manager; break;
            case 'a': etype1 = accountant; break;
            case 'e': etype1 = executive; break;
            case 'r': etype1 = researcher; break;
            default:
                break;
            }
        }

        void putEmploye()
        {
            cout << "Employe Number is : " << emp_no << endl;
            cout << "Employe compansation is : " << emp_comp << endl;
            dmy.display_date();
            switch (etype1)
            {
            case laborer:
                cout << "Employe is Laborer" << endl;
                break;
            case secretary:
                cout << "Employe is Secretary" << endl;
                break;
            case manager:
                cout << "Employe is Manager" << endl;
                break;
            case accountant:
                cout << "Employe is Accountant" << endl;
                break;
            case executive:
                cout << "Employe is Executive" << endl;
                break;
            case researcher:
                cout << "Employe is Reasercher" << endl;
                break;
            default:
                cout << "Invalid Option" << endl;
                break;
            }
        }
    
};

int main()
{
    Employe e1, e2, e3;
    cout << "-----------------------------------------------" << endl;
    cout << "Enter the Details of Employe First" << endl;
    e1.get_emp();
    cout << "-----------------------------------------------" << endl;
    cout << "Enter the Details of Employe Second" << endl;
    e2.get_emp();
    cout << "-----------------------------------------------" << endl;
    cout << "Enter the Details of Employe Third" << endl;
    e3.get_emp();
    cout << "-----------------------------------------------" << endl;
    cout << "Details of Employe First" << endl;
    e1.putEmploye();
    cout << "-----------------------------------------------" << endl;
    cout << "Details of Employe Second" << endl;
    e2.putEmploye();
    cout << "-----------------------------------------------" << endl;
    cout << "Details of Employe Third" << endl;
    e3.putEmploye();

    return 0;
}
