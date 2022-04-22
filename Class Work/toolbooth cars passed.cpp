#include <iostream>
using namespace std;
class toolbooth
{
    private:
        unsigned int cars;
        float amount;
    public:
        toolbooth() : cars(0) , amount(0){}
    void paying_cars()
    {
        cars++;
        amount += 0.50;
    }
    void non_paying_cars()
    {
        cars++;
        amount = amount;
    }
    void display()
    {
        cout << "Number of Cars Passed : " << cars << endl;
        cout << "Total Amount : " << amount << endl;
    }
};

int main() {
    toolbooth c;
    int select;
    
    cout << "Press 1 for Paying Cars \n";
    cout << "Press 2 for Non Paying Cars \n";
    cout << "Press 3 for display \n";
    cout << "Press 4 to exit \n";
    do{
        cout << "Enter the Input : ";
        cin >> select;
    
    switch(select)
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
    }
    }while(select != 4);

    return 0;
}
