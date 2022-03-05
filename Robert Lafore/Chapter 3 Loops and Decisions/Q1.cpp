/*
Assume that you want to generate a table of multiples of any given number. Write a program that allows the user to enter the number and then generates the table, formatting it
into 10 columns and 20 lines. Interaction with the program should look like this (only the
first three lines are shown):
Enter a number: 7
7 14 21 28 35 42 49 56 63 70
77 84 91 98 105 112 119 126 133 140
147 154 161 168 175 182 189 196 203 210
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number;
    
    cout << "Enter the Number : ";
    cin >> number;
    
    for (int i = 1; i <= 30; i++)
    {
        cout << setw(5) << number * i;
        if (i % 10 == 0)
        cout << endl;
    }

    return 0;
}
