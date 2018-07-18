#include<iostream>
using namespace std;

class Point{
	public:
		Point(float x,float y){
			this->x = x;
			this->y = y;
		}
		Point& operator++();
		Point& operator--();
		Point operator++(int);
		Point operator--(int);
		void display() const{
			cout << "x:" <<x<<",y:"<<y<<endl;
		}; 
	private:
		float x,y;
};

Point &Point::operator++(){
	x++;
	y++;
	return *this;
}

Point &Point::operator--(){
	x--;
	y--;
	return *this;
}

Point Point::operator++(int){
	Point temp = *this;
	++*this;
	return temp;
}

Point Point::operator--(int){
	Point temp = *this;
	--*this;
	return temp;
}

int main(){
	Point p1(4,5);
	p1.display();
	p1++;
	p1.display();
	(++p1).display();
	p1--;
	p1.display();
	(--p1).display();
	return 0;
}
