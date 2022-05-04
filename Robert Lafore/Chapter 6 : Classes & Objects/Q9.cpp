/*
 Transform the fraction structure from Exercise 8 in Chapter 4 into a fraction class.
Member data is the fraction’s numerator and denominator. Member functions should
accept input from the user in the form 3/5, and output the fraction’s value in the same
format. Another member function should add two fraction values. Write a main() program
that allows the user to repeatedly input two fractions and then displays their sum. After
each operation, ask whether the user wants to continue.

Name : Aasim Ashraf;
*/

#include <iostream>
using namespace std;
class Fraction
{
private:
    int numerator, denominator;
    char temp;

public:
    Fraction() : numerator(0), denominator(0) {}
    void get_Fraction()
    {
        cin >> numerator >> temp >> denominator;
    }
    void add_Fraction(Fraction num1, Fraction num2)
    {
        numerator = num1.numerator * num2.denominator + num1.denominator * num2.numerator;
        denominator = num1.denominator * num2.denominator;
    }
    void display()
    {
        cout << "Sum of Fraction is : " << numerator << "/" << denominator << endl;
    }
};
int main()
{
    Fraction f1, f2, f3;
    char choice;
    do
    {
        cout << "Enter 1st the Fraction : ";
        f1.get_Fraction();
        cout << "Enter 2nd the Fraction : ";
        f2.get_Fraction();

        f3.add_Fraction(f1, f2);
        f3.display();

        cout << "Do You Want to Continue (y/n) ? : ";
        cin >> choice;
    } while (choice == 'y');

    return 0;
}
