#include<iostream>
#include<stack>

using namespace std;

int main()
{
  stack <int> mystack;
  
  mystack.push(1);
  mystack.push(2);
  mystack.push(3);
  mystack.push(4);
                        //Here Mystack is 1,2,3,4
  mystack.pop();
                   // Here mystack becomes 1,2,3
  
  cout << mystack.top();
                          // The output will be 3
  return 0;
}
