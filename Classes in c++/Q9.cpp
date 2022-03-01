/*

Write a Program to calculate Electricity Bill using Classes
0   -   100 units ------------  3 rs/units

100  -  500 units ------------  5 rs/units

500  -  1000 units ------------  10 rs/units
Above 1000 -------- 20rs / unit.
*/

#include <iostream>

using namespace std;

class Electricity
{
    private:
       /* int units;*/
        float units , amount;
    public:
        
    void GetUnits()
    {
        cout << "Enter the Units Consumed : ";
        cin >> units;
    }
    
    void calunits()
    {
        if (units > 0 && units <= 100)
        {
            amount = units * 3.0;
            cout << "Amount for " << units << " is " << amount;
        }
        else if(units > 100 && units <= 500)
        {
            amount = 100 * 3.0 + ((units - 100) * 5.0);
            cout << "Amount for " << units << " is " << amount;
        }
        else if(units > 500 && units <= 1000)
        {
            amount = 100 * 3.0 + 400 * 5.0 + ((units - 500) * 10.0);
            cout << "Amount for " << units << " is " << amount;
        }
        else
          {
              amount = 100 * 3.0 + 400 * 5.0 + 500 * 10.0 + ((units - 1000) * 20.0);
              cout << "Amount for " << units << " is " << amount;
          }
    }
};

int main()
{
    Electricity Bill;
    
    Bill.GetUnits();
    Bill.calunits();

    return 0;
}
