/*
Write a temperature-conversion program that gives the user the option of converting
Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use 
floating-point numbers. Interaction with the program might look like this:
Type 1 to convert Fahrenheit to Celsius,
2 to convert Celsius to Fahrenheit: 1
Enter temperature in Fahrenheit: 70
In Celsius that’s 21.111111
*/


#include <iostream>

using namespace std;

int main()
{
    float temprature , type;
    
    cout << "Enter The Type \n(1) convert Fahrenheit to Celsius \n(2) convert Celsius to Fahrenheit" << endl;
    cin >> type;
    
    if (type == 1)
    {
        cout << "Enter the Temprature in Fahrenheit : ";
        cin >> temprature;
        
        float celsius =  (temprature - 32) * 5/9;
        cout << temprature << " in Fahrenheit is equal to " << celsius << " in celsius";
    }
    else if (type == 2)
    {
        cout << "Enter the Temprature in Celsius : ";
        cin >> temprature;
        
        float fahrenheit =  (temprature * 9/5) + 32;
        cout << temprature << " in Celsius is equal to " << fahrenheit << " in Fahrenheit";
    }
    else 
    {
        cout << "Invalid Option";
    }

    return 0;
}
