#include <iostream>
#define PI 3.14159
using namespace std;

float cirarea (float radius)  //declaration of Function
{
    radius = PI * (radius * radius);  // Calculating Area of Circle
    return radius;
}

int main()
{
    float rad;
    cout <<"Enter the Radius of Circle : ";
    cin >> rad;
    
    cout <<"Area of Circle is : " << cirarea(rad);

    return 0;
}
