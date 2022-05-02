/*
Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent
toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps
track of the number of cars that have gone by, and of the total amount of money collected.
Model this tollbooth with a class called tollBooth. The two data items are a type
unsigned int to hold the total number of cars, and a type double to hold the total amount
of money collected. A constructor initializes both of these to 0. A member function called
payingCar() increments the car total and adds 0.50 to the cash total. Another function,
called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a
member function called display() displays the two totals. Make appropriate member
functions const.
*/

#include <iostream>
using namespace std;

class Toolbooth
{
private:
    unsigned int cars;
    double amount;
public:
    Toolbooth() : cars(0) , amount(0){}

    void paying_cars()
    {
        cars ++;
        amount += 0.50;
    }
    void non_paying_cars()
    {
        cars ++;
        amount = amount;
    }
    void display()
    {
        cout << "Paying Cars : " << cars << endl;;
        cout << "Amount = " << amount << endl;
    }
    
};
int main()
{
    Toolbooth c;
    int select;
    cout << "ENTER 1 for paying cars" << endl;
    cout << "Enter 2 for non Paying cars" << endl;
    cout << "Enter 3 to display" << endl;
    cout << "enter 4 to exit" << endl;
    do
    {
        cout << "Enter the Option : ";
        cin >> select;

        switch (select)
        {
        case 1:
        {
            c.paying_cars();
            c.display();
            break;
        }
        case 2:
        {
            c.non_paying_cars();
            c.display();
            break;
        }
        case 3:
        {
            c.display();
            break;
        }
        case 4:
            {
                cout << "Exit Succesful";
                break;
            }
        default: 
            cout << "Invalid option" << endl;
            break;
        }
    } while (select != 4);

    return 0;
    

}
