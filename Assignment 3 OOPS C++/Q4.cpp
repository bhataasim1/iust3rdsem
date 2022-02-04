#include <iostream>

using namespace std;

float distance(float distance1 , float distance2)  // Declaration of Function Distance 
{
    if (distance1 > distance2) // Check which is larger
    {
       return distance1;      // if diatance1 is larger the print distance1
    }
    else
        return distance2;    // otherwise print distance2
}

int main()
{
    float distance1 , distance2;       // here i declared two float variables
    cout << "Enter the first Distance : ";
    cin >> distance1;                       // take first value from user
    
    cout << "Enter the Second Distance : ";
    cin >> distance2;                       // take second value from user
    
    cout << "The Larger Distance is " << distance( distance1, distance2 );  // call the Function 'distance' and print the larger distance

    return 0;
}
