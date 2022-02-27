/*
Write a program that first allows the user to specify a type by entering its first letter
( ‘l’ , ‘s’ , ‘m’ , and so on), then stores the type chosen as a value of a variable of type
enum etype , and finally displays the complete word
*/


#include <iostream>

using namespace std;

enum etype { Labour , Secretary , Manager , Accountant , Exective , Researcher };

struct date
{
    int day , month , year;
};

struct employ
{
    int employ_number;
    float employ_comp;
    etype etype1;
    date dmy;
};


int main()
{
    employ e1 , e2 , e3;
    char e_type;
    char temp;
    
    
    
    
    cout << "Enter the Details of Employ 1" << endl;
    cout << "Enter the Employ Number : ";
    cin >> e1.employ_number;
    cout << "Enter the Employe Compansation : ";
    cin >> e1.employ_comp;
    cout << "Enter the Employe Type (l, s, m, a, e, r) : ";
    cin >> e_type;
    
    switch (e_type)
    {
        case 'l' : e1.etype1 = Labour; break;
        case 's' : e1.etype1 = Secretary; break;
        case 'm' : e1.etype1 = Manager; break;
        case 'a' : e1.etype1 = Accountant; break;
        case 'e' : e1.etype1 = Exective; break;
        case 'r' : e1.etype1 = Researcher; break;
        default : cout << "Invalid Input"; break;
    }
    
    cout << "Enter the Day Month and Year (DD/MM/YY) : ";
    cin >> e1.dmy.day >> temp >> e1.dmy.month >> temp >> e1.dmy.year;
    
    
    cout << "Enter the Details of Employ 2" << endl;
    cout << "Enter the Employ Number : ";
    cin >> e2.employ_number;
    cout << "Enter the Employe Compansation : ";
    cin >> e2.employ_comp;
    cout << "Enter the Employe Type (l, s, m, a, e, r) : ";
    cin >> e_type;
    
    switch (e_type)
    {
        case 'l' : e2.etype1 = Labour; break;
        case 's' : e2.etype1 = Secretary; break;
        case 'm' : e2.etype1 = Manager; break;
        case 'a' : e2.etype1 = Accountant; break;
        case 'e' : e2.etype1 = Exective; break;
        case 'r' : e2.etype1 = Researcher; break;
        default : cout << "Invalid Input"; break;
    }
    
    cout << "Enter the Day Month and Year (DD/MM/YY) : ";
    cin >> e2.dmy.day >> temp >> e2.dmy.month >> temp >> e2.dmy.year;
    
    
    cout << "Enter the Details of Employ 3" << endl;
    cout << "Enter the Employ Number : ";
    cin >> e3.employ_number;
    cout << "Enter the Employe Compansation : ";
    cin >> e3.employ_comp;
    cout << "Enter the Employe Type (l, s, m, a, e, r) : ";
    cin >> e_type;
    
    switch (e_type)
    {
        case 'l' : e3.etype1 = Labour; break;
        case 's' : e3.etype1 = Secretary; break;
        case 'm' : e3.etype1 = Manager; break;
        case 'a' : e3.etype1 = Accountant; break;
        case 'e' : e3.etype1 = Exective; break;
        case 'r' : e3.etype1 = Researcher; break;
        default : cout << "Invalid Input"; break;
    }
    
    cout << "Enter the Day Month and Year (DD/MM/YY) : ";
    cin >> e3.dmy.day >> temp >> e3.dmy.month >> temp >> e3.dmy.year;
    
    cout << "----------------------------------------------------------------------" << endl;
    
    cout << "Deatils of Employ 1 " <<endl;
    cout << "Employ Number is : " << e1.employ_number << "\n Compansation " << e1.employ_comp <<endl;
    switch(e1.etype1)
    {
        case Labour:
            cout << "Employe is Labour" << endl;
        break;
        
        case Secretary:
            cout << "Employe is Secretary" <<endl;
        break;
        
        case Manager:
            cout << "Employe is Manager" << endl;
        break;
        
        case Accountant:
            cout << "Employe is Accountant" <<endl;
        break;
        
        case Exective:
            cout << "Employe is Exective" << endl;
        break;
        
        case Researcher:
            cout << "Employe is Researcher" << endl;
        break;
        
        default :
            cout << "No Match Found" << endl;
        break;
    }
    
    cout << "Date is : " << e1.dmy.day << "/" << e1.dmy.month << "/" << e1.dmy.year << endl;
    
    cout << "----------------------------------------------------------------------" << endl;
    
    
    cout << "Deatils of Employ 2 " <<endl;
    cout << "Employ Number is : " << e2.employ_number << "\n Compansation " << e2.employ_comp << endl;
    switch(e2.etype1)
    {
        case Labour:
            cout << "Employe is Labour" << endl;
        break;
        
        case Secretary:
            cout << "Employe is Secretary" <<endl;
        break;
        
        case Manager:
            cout << "Employe is Manager" << endl;
        break;
        
        case Accountant:
            cout << "Employe is Accountant" <<endl;
        break;
        
        case Exective:
            cout << "Employe is Exective" << endl;
        break;
        
        case Researcher:
            cout << "Employe is Researcher" << endl;
        break;
        
        default :
            cout << "No Match Found" << endl;
        break;
    }
    
    cout << "Date is : " << e2.dmy.day << "/" << e2.dmy.month << "/" << e2.dmy.year << endl;
    
    cout << "----------------------------------------------------------------------" << endl;
    
    cout << "Deatils of Employ 3 " <<endl;
    cout << "Employ Number is : " << e3.employ_number << "\n Compansation " << e3.employ_comp <<endl;
    switch(e3.etype1)
    {
        case Labour:
            cout << "Employe is Labour" << endl;
        break;
        
        case Secretary:
            cout << "Employe is Secretary" <<endl;
        break;
        
        case Manager:
            cout << "Employe is Manager" << endl;
        break;
        
        case Accountant:
            cout << "Employe is Accountant" <<endl;
        break;
        
        case Exective:
            cout << "Employe is Exective" << endl;
        break;
        
        case Researcher:
            cout << "Employe is Researcher" << endl;
        break;
        
        default :
            cout << "No Match Found" << endl;
        break;
    }
    
    cout << "Date is : " << e3.dmy.day << "/" << e3.dmy.month << "/" << e3.dmy.year;
    
    

    return 0;
}
