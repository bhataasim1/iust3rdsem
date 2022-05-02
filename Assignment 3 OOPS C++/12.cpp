#include <iostream>
using namespace std;

struct Fraction
{
    int numerator , denominator;
};


Fraction fadd (Fraction num1 , Fraction num2)
{
    Fraction num3;
    num3.numerator = num1.numerator * num2.denominator + num1.denominator * num2.numerator;
    num3.denominator = num1.denominator * num2.denominator;
    return num3;
}

Fraction fsub (Fraction num1 , Fraction num2)
{
    Fraction num3;
    num3.numerator = num1.numerator * num2.denominator - num1.denominator * num2.numerator;
    num3.denominator = num1.denominator * num2.denominator;
    return num3;
}

Fraction fmul (Fraction num1 , Fraction num2)
{
    Fraction num3;
    num3.numerator = num1.numerator * num2.numerator;
    num3.denominator = num1.denominator * num2.denominator;
    return num3;
}

Fraction fdiv (Fraction num1 , Fraction num2)
{
    Fraction num3;
    num3.numerator = num1.numerator * num2.denominator;
    num3.denominator = num1.denominator * num2.numerator;
    return num3;
}

int main()
{
    
    char ch;
    Fraction num1, num2, num3;
    do
    {
        char option;

        cout << "Enter the first Fraction : ";
        cin >> num1.numerator >> num1.denominator;

        cout << "Enter the Option ( + , - , * , / ) : ";
        cin >> option;

        cout << "Enter the Second Fraction : ";
        cin >> num2.numerator >> num2.denominator;


        switch (option)
        {
        case '+':
            num3 = fadd(num1 , num2);
            cout << "sum is : " << num3.numerator << "/" << num3.denominator << endl;
            break;

        case '-':
            num3 = fsub(num1, num2);
            cout << "Subtraction is : " << num3.numerator << "/" << num3.denominator << endl;
            break;

        case '*':
            num3 = fmul(num1, num2);
            cout << "Multiplication is : " << num3.numerator << "/" << num3.denominator << endl;
            break;

        case '/':
            num3 = fdiv(num1, num2);
            cout << "Division is : " << num3.numerator << "/" << num3.denominator << endl;
            break;

        default:
                cout << "Invalid Input";
            break;
        }

    cout << "Do you want to continue (y/n) : ";
    cin >> ch;
    } while (ch == 'y');

    return 0;
    
}
