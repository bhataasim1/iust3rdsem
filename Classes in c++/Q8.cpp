/*
Write a program to calculate the volume of cube using Classes.
*/

#include <iostream>

using namespace std;

class cube
{
  private:
    int length , breadth , height , volume;
  public:
    
    void Getnumber()
    {
        cout << "Enter length breadth height : ";
        cin >> length >> breadth >> height;
    }
    
    void calvolume()
    {
        volume = length * breadth * height;
    }
    
    void displaycube()
    {
        cout << "Volume is = " << volume;
    }

};

int main()
{
    cube vol;
    vol.Getnumber();
    vol.calvolume();
    vol.displaycube();

    return 0;
}
