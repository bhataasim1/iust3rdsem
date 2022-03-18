#include <iostream>

class oper_overloading
{
    int count;
    public:
        oper_overloading () : count(0){}
    int  get_count()
    {
        return count;
    }
    oper_overloading operator ++()
    {
        ++count;
        oper_overloading temp;
        temp.count = count;
        return temp;
    }
    oper_overloading operator ++(int)
    {
        count ++;
        oper_overloading temp;
        temp.count = count;
        return temp;
        
    }
};

int main() 
{
    oper_overloading c1 , c2;
    c2 = c1++;
    c2 = ++c1;
    
    std::cout << c1.get_count();
    std::cout << c1.get_count();
    std::cout << c1.get_count();

    return 0;
}