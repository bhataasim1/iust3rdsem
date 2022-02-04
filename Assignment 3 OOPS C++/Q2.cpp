#include <iostream>

using namespace std;

double power ( double n , int p ) 
{
    int a;                     
    for ( a = 1; p > 0; p--)
    a *= n;
    return a;
}


int main()
{
    double n ; int p = 2;
    
    cout << "Enter Number 'n' : ";
    cin >> n;
    
    cout << "Enter Power 'p' : ";
    cin >> p;
    
    cout << "The power is " << power(n , p);

    return 0;
}
