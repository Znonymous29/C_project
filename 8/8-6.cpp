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

Rectangle::Rectangle(double w,double h):width(w),height(h){};

Circle::Circle(double r):radius(r){};

int main(){
//	Circle c1(4.5);
//	Rectangle r1(3,4);
//	cout << "Circle的面积为：" <<c1.getArea()<<"，周长为：" <<c1.getPerim()<<endl;
//	cout << "Rectangle的面积为：" <<r1.getArea() <<"，周长为："<<r1.getPerim()<<endl;
	Shape * sp;
	sp = new Circle(5);
	cout << "The area of the Circle is " << sp->getArea () << endl;
	cout << "The perimeter of the Circle is " << sp->getPerim () << endl;
	delete sp;
	sp = new Rectangle(4,6);
	cout << "The area of the Rectangle is " << sp->getArea() << endl;
	cout << "The perimeter of the Rectangle is " << sp->getPerim () << endl;
	delete sp;
	return 0;
}

