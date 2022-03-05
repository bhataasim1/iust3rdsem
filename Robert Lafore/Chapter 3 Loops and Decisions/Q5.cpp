/*
Use for loops to construct a program that displays a pyramid of Xs on the screen. The
pyramid should look like this
      X
     XXX
    XXXXX
   XXXXXXX
  XXXXXXXXX
except that it should be 20 lines high, instead of the 5 lines shown here. One way to do
this is to nest two inner loops, one to print spaces and one to print Xs, inside an outer
loop that steps down the screen from line to line.
*/


#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <=20; i++)
    {
        for (int j = 20; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k < 2*i; k++)
        {
            cout << "X";
        }
        for (int l = 20; l >= i; l--)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
