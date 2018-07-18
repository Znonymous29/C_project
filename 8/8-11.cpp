#include<iostream>
using namespace std;

class Shape{
	public:
		Shape(){
			cout << "Shape is called.." << endl;
		};
		~Shape(){
			cout << "Shape is destroyed.." << endl;
		}
		virtual double getArea()= 0;
		virtual double getPerim()= 0;
};

class Rectangle:public Shape{
	public:
		Rectangle(double w,double h);
		double getArea(){
			return width*height;
		};
		double getPerim(){
			return 2*(width+height);
		}
		~Rectangle(){};
	private:
		double width,height;
};

class Circle:public Shape{
	public:
		Circle(double r);
		double getArea(){
			return 3.14*radius*radius;
		};
		double getPerim(){
			return 6.18*radius;
		};
		~Circle(){};
	private:
		double radius;
};

class Square:public Shape{
	public:
		Square(double len);
		double getArea(){
			return length*length;
		};
		double getPerim(){
			return 4*length;
		};
		~Square(){};
	private:
		double length;
};

Rectangle::Rectangle(double w,double h):width(w),height(h){};
Circle::Circle(double r):radius(r){};
Square::Square(double len):length(len){};

int getVertexCount(Shape *s) {
	Rectangle *r = dynamic_cast<Rectangle *>(s);
	if(r!=0) return 4;
	Circle *c = dynamic_cast<Circle *>(s);
	if(c!=0) return 0;
	Square *q = dynamic_cast<Square *>(s);
	if(q!=0) return 4;
	return 0;
}

int main(){
	Shape *s;
	s= new Rectangle(3,4);
	cout << getVertexCount(s)<<endl;
	delete s;
	s= new Circle(3);
	cout << getVertexCount(s)<<endl;
	delete s;
	return 0;
}


