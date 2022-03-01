/*
Write a program in c++ to swap two number using class
*/

#include <iostream>

using namespace std;

class Swap
{
    private:
        int a , b;
    public:
        
    void GetNumbers()
    {
        cout << "Enter the Two Numbers : ";
        cin >> a >> b;
    }
    
    void Printswap()
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    
    void display()
    {
        cout << "A = " << a << "\nB = " << b;
    }
};

int main()
{
    Swap n;
    n.GetNumbers();
    n.Printswap();
    n.display();

    return 0;
}
