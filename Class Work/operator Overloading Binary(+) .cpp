#include <iostream>

using namespace std;

class point
{
    int x , y;
    public:
        point(): x(0) , y(0){}
    void getpoint()
    {
        cout << "enter x , y : ";
        cin >> x >> y;
    }
    void display()
    {
        cout << x << y;
    }
    
    point operator +(point p)
    {
        point temp;
        temp.x = x + p.x;
        temp.y = y + p.y;
        return temp;
        
    }
};

int main()
{
    point p1 , p2  ,p3;
    p1.getpoint();
    p2.getpoint();
    p3 = p1 + p2;
    p3.display();

    return 0;
}
