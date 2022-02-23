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
  
};

int main()
{
    Circle Ar;
    Ar.GetInput();
    Ar.PrintArea();
    cout <<"Area of Circle is : " << Ar.PrintArea();

    return 0;
}
