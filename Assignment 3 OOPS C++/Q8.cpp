#include <iostream>

using namespace std;

void Swap ( int &a , int &b)
{
    
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a , b;
    cout << "Enter the First Number : ";
    cin >> a;
    
    cout << "Enter the Second Number : ";
    cin >> b;
    
    cout << "Before Swaping Numbers are : " << a << " and " << b <<endl;
    
    Swap(a, b);
    cout <<"After wapping Number are : " << a << " and " << b;

    return 0;
}
