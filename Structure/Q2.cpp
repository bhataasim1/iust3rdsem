/*
Write a program that uses a structure called point to model a point. Define three points,
and have the user input values to two of them. Then set the third point equal to the sum
of the other two, and display the value of the new point.
*/


#include <iostream>

using namespace std;

struct point 
{
    int x , y;
};

int main()
{
    point p1 , p2 , p3;
    
    cout << "Enter the Coordinates for point p1 : ";
    cin >> p1.x >> p1.y;
    
    cout << "enter the Coordinates for point p2 : ";
    cin >> p2.x >> p2.y;
    
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;
    
    cout << "Sum of X is : " << p3.x << endl;
    cout << "Sum of Y is : " << p3.y;

    return 0;
}
