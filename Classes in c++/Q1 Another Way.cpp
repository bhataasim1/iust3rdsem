#include <iostream>

using namespace std;

class Circle
{
    public:
    float Radius , Area;
    
    void GetInput()
    {
        cout << "Enter the Radius of Circle : ";
        cin >> Radius;
    }
    
    float PrintArea()
    {
        Area = 3.14*Radius*Radius;
        return Area;
    }
   float display()
    {
        cout << "Area Of Circle is : " << Area;
        return Area;
    }

};

int main()
{
    Circle Ar;
    Ar.GetInput();
    Ar.PrintArea();
    Ar.display();
   

    return 0;
}
