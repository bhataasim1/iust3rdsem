/*
Create an employee class, basing it on Exercise 4 of Chapter 4. The member data should
comprise an int for storing the employee number and a float for storing the employee’s
compensation. Member functions should allow the user to enter this data and display it.
Write a main() that allows the user to enter data for three employees and display it

Name :- Aasim Ashraf;
*/

#include <iostream>
using namespace std;

class Employe
{
    private:
        int emp_number;
        float emp_comp;
    public:
        Employe(): emp_number(0), emp_comp(0){}

    void getEmploye()
    {
        cout << "Enter the Number of Employe : ";
        cin >> emp_number;
        cout << "Enter the companssation of Employe : ";
        cin >> emp_comp;
    }
    void displayemp()
    {
        cout << "Employe Number = " << emp_number << endl;
        cout << "Employe Compansation = " << emp_comp << endl;
    }
};

int main()
{
    Employe e1, e2, e3;
    e1.getEmploye();
    e2.getEmploye();
    e3.getEmploye();
    cout << "-------------------------------------------------" << endl;
    cout << "Details of Employe First" << endl;
    e1.displayemp();
    cout << "-------------------------------------------------" << endl;
    cout << "Details of Employe Second" << endl;
    e2.displayemp();
    cout << "-------------------------------------------------" << endl;
    cout << "Details of Employe Third" << endl;
    e3.displayemp();

    return 0;
}
