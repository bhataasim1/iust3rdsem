#include <iostream>
using namespace std;

class dist
{
    int feet; float inches;
    public:
        dist () : feet(0) , inches (0.0){}
    dist (float m)
    {
        float tf  = m * 3.28F;
        feet = (int) tf;
        inches = (tf - feet) * 12;
    }
    void show_dist()
    {
        cout << "Feet = " << feet << " Inches = " << inches;
    }
};
int main() {
    dist d1;
    float meter;
    cout << "Enter the Distance in Meters : ";
    cin >> meter;
    
    d1 = meter;
    d1.show_dist();

    return 0;
}
