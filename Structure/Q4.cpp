/*
Create a structure called employee that contains two members: an employee number
(type int) and the employee’s compensation (in dollars; type float). Ask the user to fill
in this data for three employees, store it in three variables of type struct employee, and
then display the information for each employee.
*/


#include <iostream>

using namespace std;

struct employ
{
    int eno;
    float ecomp;
};

int main()
{
    employ e1 , e2 , e3;
    
    cout << "Enter the Details of Employ 1 : " << endl;
    cout << "Enter the Employ Number : ";
    cin >> e1.eno;
    cout << "Enter the Employ Compansion : ";
    cin >> e1.ecomp;
    
    cout << "Enter the Details of Employ 2 : " << endl;
    cout << "Enter the Employ Number : ";
    cin >> e2.eno;
    cout << "Enter the Employ Compansion : ";
    cin >> e2.ecomp;
    
    cout << "Enter the Details of Employ 3 : " << endl;
    cout << "Enter the Employ Number : ";
    cin >> e3.eno;
    cout << "Enter the Employ Compansion : ";
    cin >> e3.ecomp;
    
    cout << "Employ Number  " << e1.eno << " Compansion " << e1.ecomp << endl;
    cout << "Employ Number " << e2.eno << " Compansion " << e2.ecomp << endl;
    cout << "Employ Number " << e3.eno << " Compansion " << e3.ecomp;

    return 0;
}


