/*
Create a class that imitates part of the functionality of the basic data type int. Call the
class Int (note different capitalization). The only data in this class is an int variable.
Include member functions to initialize an Int to 0, to initialize it to an int value, to display it (it looks just like an int), and to add two Int values.
*/


#include <iostream>
using namespace std;

class INT
{
    private:
        int i;
    public:
        INT() : i(0) {}
    INT ( int i1)
    {
        i = i1;
    }
    void add(INT a , INT b)
    {
        i = a.i + b.i;
    }
    void display()
    {
        cout << "Sum is = " << i;
    }
};
int main()
{
    INT a(5);
    INT b(4);
    INT c;

    c.add(a,b);
    c.display();

    return 0;
}
