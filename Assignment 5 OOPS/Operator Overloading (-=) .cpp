#include <iostream>
using namespace std;

class subtract
{
    int sub;
    public:
        subtract() : sub (0){}
    subtract ( int s)
    {
        sub = s;
    }
    void operator -= (int s1)
    {
        sub = sub - s1;
    }
    
    void display_sub()
    {
        cout << sub;
    }
};

int main() {
    subtract p1(50);
    int p2 = 10;
    p1 -= p2;
    p1.display_sub();

    return 0;
}
