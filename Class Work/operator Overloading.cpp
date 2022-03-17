#include <iostream>
using namespace std;

class oper_overloading
{
    int count;
    public:
        oper_overloading() : count(0)
        {
            
        }
    int get_count()
        {
            return count;
        }
    void operator ++()
    {
        ++count;
    }
};

int main() 
{
    oper_overloading c1;
    ++c1;
    cout << c1.get_count();
    ++c1;
    cout << c1.get_count();
    ++c1;
    cout << c1.get_count();

    return 0;
}
