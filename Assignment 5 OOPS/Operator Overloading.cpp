#include <iostream>
#include <cmath>

class Point {
	float x, y;
	
	public:
		Point():x(0),y(0){};
		Point(float a, float b): x(a), y(b){};
		
		void print(){
			std::cout << "Point( " << x << ", " << y << " )" << "\n";
		}
		
		// Overloading ++
		void operator ++(){
			++x; ++y;
		}
		
		void operator ++(int){
			x++; y++;
		}
		
		// Overloading --
		void operator --(){
			--x; --y;
		}
				
		void operator --(int){
			x--; y--;
		}
		
		// Overloading +
		Point operator +(Point p){
			x += p.x;
			y += p.y;
			return *this;
		}
		
		// Overloading -
		Point operator -(Point p){
			x -= p.x;
			y -= p.y;
			return *this;
		}
		
		// Overloading /
		Point operator / (Point p){
			x /= p.x;
			y /= p.y;
			return *this;
		}
		
		// Overloading *
		Point operator * (Point p){
			x *= p.x;
			y *= p.y;
			return *this;
		}
		
		// Overloading >
		bool operator > (Point p){
			float magA = sqrt( pow ( x, 2 ) + pow(y, 2));
			float magB = sqrt( pow ( p.x, 2 ) + pow(p.y, 2));
			return magA > magB;
		}
		
		// Overloading <
		bool operator < (Point p){
			float magA = sqrt( pow ( x, 2 ) + pow(y, 2));
			float magB = sqrt( pow ( p.x, 2 ) + pow(p.y, 2));
			return magA < magB;
		}
		
		// Overloading <=
		bool operator <= (Point p){
			float magA = sqrt( pow ( x, 2 ) + pow(y, 2));
			float magB = sqrt( pow ( p.x, 2 ) + pow(p.y, 2));
			return magA <= magB;
		}
		
		// Overloading >=
		bool operator >= (Point p){
			float magA = sqrt( pow ( x, 2 ) + pow(y, 2));
			float magB = sqrt( pow ( p.x, 2 ) + pow(p.y, 2));
			return magA >= magB;
		}
	};
	
int main(){
	Point A(1.5, 2.5); // 2.91
	Point B(2.6, 1.2);
	Point R;
	
	R = A + B;
	R.print();
	
	R = A - B;
	R.print();
	
	R = A / B;
	R.print();
	
	R = A * B;
	R.print();
	
	A++;
	A.print();
	
	std::cout << ((A < B) ? "A is Smaller" : "B is Smaller") << "\n";
	std::cout << ((A <= B) ? "A is Smaller or Equal" : "A is Greater") << "\n";
	
	return 0;
}
