/*
Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to
enter a number of gallons, and then displays the equivalent in cubic feet.
*/


#include <iostream>

using namespace std;

int main()
{
    float gallons , cubic_feet;
    
    cout << "Enter the Number of Gallons : ";
    cin >> gallons;
    
    cubic_feet = gallons / 7.481;
    
    cout << gallons << " Gallons Equivalent to  " << cubic_feet << " Cubic Feet";

    return 0;
}
