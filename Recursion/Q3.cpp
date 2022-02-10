#include <iostream>

using namespace std;

int Reverse ( int num , int rev)
{
    if ( num == 0)
    {
        return rev;
    }
    else
        return Reverse(num / 10 , rev * 10 + num % 10);
}

int main()
{
    int num , temp;
    cout << "Enter the Number : ";
    cin >> num;
    
    temp = Reverse(num , 0);
    cout << "Reversed Number is :" << temp;

    return 0;
}
