/*
Create a structure called Volume that uses three variables of type Distance (from the
ENGLSTRC example) to model the volume of a room. Initialize a variable of type Volume
to specific dimensions, then calculate the volume it represents, and print out the result.
To calculate the volume, convert each dimension from a Distance variable to a variable
of type float representing feet and fractions of a foot, and then multiply the resulting
three numbers.
*/


#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    float inch;
};

struct volume
{
    Distance length , width , height;
};

int main()
{
    float l , w , h;
    volume room = { {5 , 2.5} , {6 , 2.3}  , {9 , 3.5} };
    
    l = room.length.feet + room.length.inch / 12;
    w = room.width.feet + room.width.inch / 12;
    h = room.height.feet + room.height.inch / 12;
    
    cout << "Volume of Room is : " << l*w*h << " Cubic Meter";

    return 0;
}
