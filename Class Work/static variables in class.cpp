

#include <iostream>
using namespace std;

class counter
{
    static int count;
    public:
        counter ()
        {
            count ++;
        }
    int get_count()
    {
        return count;
    }
};

int counter :: count = 0;

int main() 
{
    counter c1, c2, c3;
    cout << c1.get_count();
    cout << c2.get_count();
    cout << c3.get_count();

    return 0;
}
