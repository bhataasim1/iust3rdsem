#include <iostream>

using namespace std;

int checkPrime ( int num , int i)
{
    if ( i == 1)
        return 1;
    else
    {
        if (num % i == 0)
        return 0;
    
    else 
        return checkPrime(num, i - 1);
    }
}

int main()
{
    int num , prime;
    cout << "Enter the Number : ";
    cin >> num;
    
    prime = checkPrime (num , num / 2);
    
    if ( prime == 1)
    {
        cout << num << " is a Prime Number";
    }
    else if (prime == 0)
    {
        cout << num <<" is not a prime number";
    }
    

    return 0;
}
