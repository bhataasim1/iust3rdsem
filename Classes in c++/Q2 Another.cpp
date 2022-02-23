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
  
  while(!mystack.empty())      // Here i used the While loop to check if mystack is not empty then display the stack
  {
      cout << mystack.top();
      mystack.pop();
  }
  
  
  return 0;
}
