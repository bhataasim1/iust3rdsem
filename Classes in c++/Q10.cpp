/*
Write a prog to calculate Bill.
*/


#include <iostream>

using namespace std;

class Electricity_Bill
{
    private:
    char EB;
    float previous_units , total_units , current_units;
    float amount;
    public:
    
    void TypeEB()
    {
        cout << "Enter the Type of Connection (Domentic / Commercial) : ";
        cin >> EB;
    }
    
    void GetUnits()
    {
        cout << "Enter the Total Units : ";
        cin >> total_units;
        
        cout << "Enter the Previous Month Units : ";
        cin >> previous_units;
        
        current_units = total_units - previous_units;
        
    }
    
    void Cal()
    {
        if (EB == 'D' || EB == 'd')
        {
            if(current_units > 0 && current_units <= 100)
            {
                amount = current_units * 1;
                cout << "Amount is : " << amount;
            }
            else if(current_units > 100 && current_units <= 200)
            {
                amount = 100 * 1 + ((current_units - 100) * 2.5);
                cout << "Amount is : " << amount;
            }
            else if(current_units > 200 && current_units <= 500)
            {
                amount = 100 * 1 + 100 * 2.5 + ((current_units - 200) * 4);
                cout << "Amount is : " << amount;
            }
            if(current_units > 500)
            {
                amount = 100 * 1 + 100 * 2.5 + 300 * 4 + ((current_units - 500) * 6);
                cout << "Amount is : " << amount;
            }
        }
        else if (EB == 'C' || EB == 'c')
        {
            if(current_units > 0 && current_units <= 100)
            {
                amount = current_units * 2;
                cout << "Amount is : " << amount;
            }
            else if(current_units > 100 && current_units <= 200)
            {
                amount = 100 * 1 + ((current_units - 100 ) * 4.5);
                cout << "Amount is : " << amount;
            }
            else if(current_units > 200 && current_units <= 500)
            {
                amount = 100 * 1 + 100 * 4.5 + ((current_units - 200) * 6);
                cout << "Amount is : " << amount;
            }
            else if(current_units > 500)
            {
                amount = 100 * 1 + 100 * 4.5 + 300 * 6 + ((current_units - 500) * 7);
                cout << "Amount is : " << amount;
            }
        }
    }
};

int main()
{
    Electricity_Bill Bill;
    
    Bill.TypeEB();
    Bill.GetUnits();
    Bill.Cal();

    return 0;
}
