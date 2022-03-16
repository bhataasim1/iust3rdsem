/*
write a program to create class distance having to instance variable inches and feet.
write a function called add_distance to add data members of the distance object, the add_distance object should take only one argument.
*/

#include <iostream>

using namespace std;

class Distance
{
    private:
        int feet , inches;
    public:
        
        void get_distance()
        {
            cout << "Enter the Feet : ";
            cin >> feet;
            cout << "Enter the Inches : ";
            cin >> inches;
        }
        
        void add_distance(Distance d1 , Distance d2)
        {
            feet = d1.feet + d2.feet;
            inches = d1.inches + d2.inches;
            feet = feet + (inches / 12);
            inches = inches % 12;
        }
        
        void display_distance()
        {
            cout << "Feet = " << feet << " Inches = " << inches;
        }
};

int main()
{
    Distance d1 , d2 , d3;
    d1.get_distance();
    d2.get_distance();
    d3.add_distance(d1 , d2);
    d3.display_distance();

    return 0;
}
