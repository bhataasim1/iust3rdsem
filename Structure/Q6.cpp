/*
Write a program that first allows the user to specify a type by entering its first letter
( ‘l’ , ‘s’ , ‘m’ , and so on), then stores the type chosen as a value of a variable of type
enum etype , and finally displays the complete word
*/


#include <iostream>

using namespace std;


enum etype { Labour , Secretary , Manager , Accountant , Exective , Researcher };

int main()
{
    etype etype1;
    char type;
    
    cout << "Enter the Employe First Letter ( l , s , m , a , e , r ) : ";
    cin >> type;
    
    switch(type)
    {
        case 'l' : etype1 = Labour; break;
        case 's' : etype1 = Secretary; break;
        case 'm' : etype1 = Manager; break;
        case 'a' : etype1 = Accountant; break;
        case 'e' : etype1 = Exective; break;
        case 'r' : etype1 = Researcher; break;
    }
    
    switch (etype1)
    {
        case Labour:
            cout << "Employe is Labour";
        break;
        
        case Secretary:
            cout << "Employe is Secretary";
        break;
        
        case Manager:
            cout << "Employe is Manager";
        break;
        
        case Accountant:
            cout << "Employe is Accountant";
        break;
        
        case Exective:
            cout << "Employe is Exective";
        break;
        
        case Researcher:
            cout << "Employe is Researcher";
        break;
    }

    return 0;
}


