#include <iostream>
using namespace std;

class person
{
    public:
    string name;
    int age;
    
    person(string n , int a) : name(n) , age(a){};
    person() : name("foo") , age(0){};
    
    friend ostream& operator <<(ostream& os , person& p)
    {
        cout << "Name : " << p.name << endl;;
        cout << "Age :" << p.age << endl;
        return os;
    }
    friend istream& operator >>(istream& is , person& p)
    {
        is >> p.name >> p.age;
        return is;
    }
};

int main() {
    person p1;
    cin >> p1;
    cout << p1;

    return 0;
}
