/*
Modify the four-function fraction calculator of Exercise 12 in Chapter 5 to use a
fraction class rather than a structure. There should be member functions for input and
output, as well as for the four arithmetical operations. While you’re at it, you might as
well install the capability to reduce fractions to lowest terms. Here’s a member function
that will reduce the fraction object of which it is a member to lowest terms. It finds the
greatest common divisor (gcd) of the fraction’s numerator and denominator, and uses this
gcd to divide both numbers.

void Fraction::lowterms() // change ourself to lowest terms
{
    long tnum, tden, temp, gcd;
    tnum = labs(numerator); // use non-negative copies
    tden = labs(denominator); // (needs cmath)
    if (tden == 0)    // check for n/0
    {
        cout << "Illegal fraction : division by 0";
        exit(1);
    }
    else if (tnum == 0) // check for 0/n
    {
        numerator = 0;
        denominator = 1;
        return;
    }
    // this ‘while’ loop finds the gcd of tnum and tden
    while (tnum != 0)
    {
        if (tnum < tden) // ensure numerator larger
        {
            temp = tnum;
            tnum = tden;
            tden = temp;
        }                   // swap them
        tnum = tnum - tden; // subtract them
    }
    gcd = tden;      // this is greatest common divisor
    numerator = numerator / gcd; // divide both num and den by gcd
    denominator = denominator / gcd; // to reduce frac to lowest terms
}

You can call this function at the end of each arithmetic function, or just before you perform output. You’ll also need the usual member functions: four arithmetic operations,
input, and display. You may find a two-argument constructor useful.
*/


#include <iostream>
#include<cmath>
using namespace std;

class Fraction
{
    private:
        int numerator , denominator;
        char temp;
    public:
        Fraction() : numerator(0), denominator(0){}

    void get_Fraction()
    {
        cout << "Enter the Fraction p/q : ";
        cin >> numerator >> temp >> denominator;
    }
    
    void cal_Fraction(Fraction num1 , Fraction num2 , char option)
    {
        switch (option)
        {
        case '+':
            cout << "Addition of Two fractions = " ;
            numerator = num1.numerator * num2.denominator + num1.denominator * num2.numerator;
            denominator = num1.denominator * num2.denominator;
            break;
        case '-':
            cout << "Subtraction of Two fractions = " ;
            numerator = num1.numerator * num2.denominator - num1.denominator * num2.numerator;
            denominator = num1.denominator * num2.denominator;
            break;
        case '*':
            cout << "Multiplication of two Fractions = ";
            numerator = num1.numerator * num2.numerator;
            denominator = num1.denominator * num2.denominator;
            break;
        case '/':
            cout << "Division of two Fractions = " ;
            numerator = num1.numerator * num2.denominator;
            denominator = num1.denominator * num2.numerator;
            break;
        default:
            break;
        }
    }
    void display_Fraction()
    {
        cout << numerator << "/" << denominator;
    }
    void lowterms();
};
void Fraction::lowterms() // change ourself to lowest terms
{
    long tnum, tden, temp, gcd;
    tnum = labs(numerator); // use non-negative copies
    tden = labs(denominator); // (needs cmath)
    if (tden == 0)    // check for n/0
    {
        cout << "Illegal fraction : division by 0";
        exit(1);
    }
    else if (tnum == 0) // check for 0/n
    {
        numerator = 0;
        denominator = 1;
        return;
    }
    // this ‘while’ loop finds the gcd of tnum and tden
    while (tnum != 0)
    {
        if (tnum < tden) // ensure numerator larger
        {
            temp = tnum;
            tnum = tden;
            tden = temp;
        }                   // swap them
        tnum = tnum - tden; // subtract them
    }
    gcd = tden;      // this is greatest common divisor
    numerator = numerator / gcd; // divide both num and den by gcd
    denominator = denominator / gcd; // to reduce frac to lowest terms

    cout << numerator << "/" << denominator;
    cout << endl;
}

int main()
{
    Fraction num1, num2 , num3;
    char option;
    num1.get_Fraction();
    cout << "Enter the Operation ( + , - , * , / ) : ";
    cin >> option;
    num2.get_Fraction();

    num3.cal_Fraction(num1 , num2 , option);
    num3.display_Fraction();
    cout << "\nLowest Term of Fraction is : ";
    num3.lowterms();

    return 0;

}
