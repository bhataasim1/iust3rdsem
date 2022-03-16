/*
Wite a program to demonastrate ṭhe parametrized Constructor.
*/

#include <iostream>

using namespace std;

class parametrized
{
    private:
    int x , y;
    public:
    
    parametrized (int a1 , int b1)
    {
        x = a1;
        y = b1;
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
    parametrized p1(10 , 20);
    cout << "A = " << p1.getX() << " B = " << p1.getY();

    return 0;
}
