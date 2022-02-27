/*
Modify the program so that all fractions are stored in variables of type struct fraction , whose two members are the fraction’s numerator and denominator (both type int ).
All fraction-related data should be stored in structures of this type.
*/


#include <iostream>

using namespace std;

struct fraction
{
    int numerator , denominator;
};

int main()
{
    fraction num1 , num2 , num3;
    
    cout << "Enter the First fraction (numerator and denominator) : ";
    cin >> num1.numerator >> num1.denominator;
    
    cout << "Enter the Second fraction (numerator and denominator) : ";
    cin >> num2.numerator >> num2.denominator;
    
    num3.numerator = num1.numerator * num2.denominator + num1.denominator * num2.numerator;
    num3.denominator = num1.denominator * num2.denominator;
    
    cout << "Sum of Fractions is : " << num3.numerator << "/" << num3.denominator;

    return 0;
}
