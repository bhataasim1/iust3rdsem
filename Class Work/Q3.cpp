/*
write a program to create class distance having to instance variable inches and feet.
write a function called add_distance to add data members of the distance object, the add_distance object should take only one argument.
*/

#include <iostream>

using namespace std;

class Distance
{
    private:
        float feet , inches;
    public:
        Distance(float feet , float inches) : feet(feet) , inches(inches){}
        
        float getFeet()
        {
            return feet;
        }
        float getInches()
        {
            return inches;
        }
        
        void add_distance(Distance d)
        {
            feet += d.getFeet();
            inches += d.getInches();
        }
        
        void display_distance()
        {
            cout <<" Feet = " << feet << "\n " << "Inches = " << inches << endl;
        }
};

int main()
{
    Distance d1(5.7  , 8.4);
    d1.display_distance();
    
    Distance d2(4.8 , 9.7);
    d2.display_distance();
    
    cout << "\n Adding d2 to d1" << endl;
    d1.add_distance(d2);
    d1.display_distance();

    return 0;
}
