/*
 Create a class called ship that incorporates a ship’s number and location. Use the
approach of Exercise 8 to number each ship object as it is created. Use two variables of
the angle class from Exercise 7 to represent the ship’s latitude and longitude. A member
function of the ship class should get a position from the user and store it in the object;
another should report the serial number and position. Write a main() program that creates three ships, asks the user to input the position of each, and then displays each ship’s
number and position.

Name : Aasim Ashraf;
*/


#include <iostream>
using namespace std;

class Angle
{
private:
    int degree;
    float minute;
    char direction;

public:
    void get_angle()
    {
        cout << "Enter the Degree : ";
        cin >> degree;
        cout << "Enter the minute : ";
        cin >> minute;
        cout << "Enter the Direction (e, w, n, s) : ";
        cin >> direction;
    }
    void display_angle()
    {
        cout << degree << "\xF8"
             << " " << minute << " " << direction;
        if (direction == 'e' || direction == 'w')
        {
            cout << " Longitude";
        }
        if (direction == 'n' || direction == 's')
        {
            cout << " Latitude";
        }
    }
};
class Ship
{
private:
    static int count;
    unsigned int ship_no;
    Angle longitude, latitude;

public:
    Ship()
    {
        count++;
        ship_no = count;
    }
    void get_ship()
    {
        cout << "Enter the Longitude of Ship \n";
        longitude.get_angle();
        cout << "Enter the Latitude of Ship \n";
        latitude.get_angle();
    }
    void display_ship()
    {
        cout << "Ship Number is : " << ship_no << endl;
        longitude.display_angle();
        cout << endl;
        latitude.display_angle();
        cout << endl;
    }
};
int Ship ::count = 0;

int main()
{
    Ship s1, s2, s3;
    cout << "Enter Position of Ship 1" << endl;
    s1.get_ship();
    cout << "Enter Position of Ship 2" << endl;
    s2.get_ship();
    cout << "Enter Position of Ship 3" << endl;
    s3.get_ship();
    cout << "---------------------------------------------" << endl;
    cout << "Position of Ship 1" << endl;
    s1.display_ship();
    cout << "---------------------------------------------" << endl;
    cout << "Position of Ship 2" << endl;
    s2.display_ship();
    cout << "---------------------------------------------" << endl;
    cout << "Position of Ship 3" << endl;
    s3.display_ship();

    return 0;
}
