#include <iostream>

using namespace std;

float zerosmaller ( int &n1 , int &n2) // Here i declared the Function 'zerosmaller() and i used '&' for refrence as asked in qusetion'
{
    if (n1 < n2)        // here i checked if number1 < number2 then i assign number1 to 0
    {
        n1 = 0;
        return true;
    }
    else               // if number1 > number2 then assign 0 to number2 
       n2 = 0;
       return false;
}


int main()
{
    int n1 , n2;             // Here i declared two int types n1 , n2
    cout << "Enter the First Number (n1) : ";
    cin >> n1;
    
    cout << "Enter the Second Number (n2) : ";
    cin >> n2;
    
    cout << "The Number assigned to Zero is : ";
    if (zerosmaller (n1 , n2))      // Here i called yhe Function 'zerosmaller()' and checked the values of n1 , n2 which i took from user
    {
        cout << "n1";
    }
    else
      cout << "n2";

    return 0;
}
