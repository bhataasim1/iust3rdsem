#include <iostream>

using namespace std;

int main()
{
    float previous_units , current_units , total_units;
    float amount;
    char EB;
    
    cout << "Enter the Type of Connection (D / C) : ";
    cin >> EB;
    
    cout << "Enter the Total Units : ";
    cin >> total_units;
    
    cout << "Enter the Previous Month Units : ";
    cin >> previous_units;
    
    current_units = total_units - previous_units;
    
    if (EB == 'd' || EB == 'D')
    {
        if(current_units > 0 && current_units <= 100)
        {
            amount = current_units * 1;
            cout << "Amount is : " << amount;
        }
        else if (current_units > 100 && current_units <= 200)
        {
            amount = 100 * 1 + ((current_units - 100) * 2.5); 
            cout << "Amount is : " << amount;
        }
        else if (current_units > 200 && current_units <= 500)
        {
            amount = 100 * 1 + 100 * 2.5 + ((current_units - 200) * 4); 
            cout << "Amount is : " << amount;
        }
        else if (current_units > 500)
        {
            amount = 100 * 1 + 100 * 2.5 + 300 * 4 + ((current_units - 500) * 6);
            cout << "Amount is : " << amount;
        }
        else if (EB == 'c' || EB == 'C')
        {
            if (current_units > 0 && current_units <= 100)
            {
                amount = current_units * 2;
                cout << "Amount is : " << amount;
            }
            else if (current_units > 100 && current_units <= 200)
            {
                amount = 100 * 2 + ((current_units - 100) * 4.50);
                cout << "Amount is : " << amount;
            }
            else if (current_units > 200 && current_units <= 500)
            {
                amount = 100 * 2 + 100 * 4.5 + ((current_units - 200) * 6);
                cout << "Amount is : " << amount;
                
            }
            else if (current_units > 500)
            {
                amount = 100 * 2 + 100 * 4.5 + 300 * 6 + ((current_units - 500) * 7);
                cout << "Amount is : " << amount;
            }
        }
    }

    return 0;
}
