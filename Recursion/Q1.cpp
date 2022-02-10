#include <iostream>

using namespace std;

int Fibonacci ( int n)
{
    if ( n == 0)
       return 0;
       
    else if ( n == 1 )
       return 1;
    
    else
       return (Fibonacci ( n - 1) + Fibonacci ( n - 2));
}

int main()
{
    int n , i = 0 , a;
    
    cout << "Enter the Length of Fibonacci Series : ";
    cin >> n;
    
    cout << "Fibonacci Series is : " << endl;
    for ( a = 1; a <= n; a++)
    {
        cout << Fibonacci(i) << endl;
        i++;
    }
    
    
    return 0;
}
