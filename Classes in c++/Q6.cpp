/*
Write a Program in c++ to find largest of three numbers using classes
*/


#include <iostream>

using namespace std;

class Largest
{
    private:
      int a , b , c;
    public:
    
    void GetLargest()
    {
        cout << "Enter the Three Numbers : ";
        cin >> a >> b >> c;
    }
    
    int PrintLargest()
    {
        if (a > b)
        {
            if (a > c)
            {
                return a;
            }
            else return c;
        }
        else if (b > c )
        {
            return b;
        }
        else
            return c;
    }   
    
};

int main()
{
    Largest lar;
    lar.GetLargest();
    cout << lar.PrintLargest() << " is largest";

    return 0;
}
