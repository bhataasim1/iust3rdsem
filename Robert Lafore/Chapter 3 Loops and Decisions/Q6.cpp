/*
Modify the FACTOR program in this chapter so that it repeatedly asks for a number and
calculates its factorial, until the user enters 0, at which point it terminates. You can
enclose the relevant statements in FACTOR in a while loop or a do loop to achieve this
effect.
*/

#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    do{
        long fact = 1;
        cout << "Enter the Number or 0 to Exit : ";
        cin >> number;
        
        for (int i = number; i > 0; i--)
        {
            fact *= i;
        }
        cout << "Factorial of " << number << " is "  << fact << endl;
    }while(number != 0);

    return 0;
}
