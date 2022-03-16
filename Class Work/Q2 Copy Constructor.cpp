/*
Write a Progrmam to demonastrate copy construcrtor.
*/

#include <iostream>

using namespace std;

class copy_constructor
{
        int x , y;
    public:
        
        copy_constructor (int a1 , int b1)
        {
            x = a1;
            y = b1;
        }
        
        copy_constructor ( const copy_constructor &p1)
        {
            x = p1.x;
            y = p1.y;
        }
        
        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }
};

int main()
{
    copy_constructor p1 (10 , 20);
    copy_constructor p2 = p1;
    
    cout << "X = " << p1.getX() << " Y = " << p1.getY() << endl; // Normal Constructor
    
    cout << "X = " << p2.getX() << " Y = " << p2.getY(); // copied Constructor

    return 0;
}
