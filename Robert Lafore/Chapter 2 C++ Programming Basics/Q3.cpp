/*
Write a program that generates the following output:
10
20
19
Use an integer constant for the 10, an arithmetic assignment operator to generate the 20,
and a decrement operator to generate the 19.
*/

#include <iostream>


using namespace std;

int main()
{
    int a = 10;
    cout << a;
    
    a *= 2;
    cout << a--;
    cout << a;
    return 0;
}
