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
    operator float ()
    {
        float tf = inches / 12;
        tf +=  feet;
        return tf / 3.28F;
    }
    void show_dist()
    {
        cout << "Feet = " << feet << " Inches = " << inches << endl;
    }
};
int main() {
    dist d1;
    float meter;
    cout << "Enter the Distance in Meters : ";
    cin >> meter;
    
    d1 = meter;
    d1.show_dist();
    
    float m1 = d1;
    cout << "Meters = " << d1;

    return 0;
}
