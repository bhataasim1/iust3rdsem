#include <iostream>

using namespace std;

class Point
{
  public:
  
  float xcord , ycord;
  
  void GetPoint()
  {
      cout << "Enter the Coordinate of X : ";
      cin >> xcord;
      cout << "Enter the Coordinate of Y : ";
      cin >> ycord;
  }
  
  float DisplayPoint()
  {
      cout << "Coordinate X " << xcord << endl;
      cout << "Coordinate Y : "<< ycord << endl;
      return xcord , ycord;
  }
};

int main()
{
    Point p;
    p.GetPoint();
    p.DisplayPoint();

    return 0;
}
