#include <iostream>
using namespace std;

class addition
{
      int add;
  public:
      addition() : add(0){}
  
  addition (int a)
  {
    add = a;
  }
  
  void operator += (int a1)
  {
    add = add + a1;
  }
  
  void display()
  {
    cout << add;
  }
  
};

int main()
{
  addition p1 (30);
  int p2 = 50;
  
  p1 += p2;
  
  p1.display();
  
  return 0;
}
