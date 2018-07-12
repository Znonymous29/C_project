#include<iostream> 
using namespace std;

class Shape{
	public:
		Shape(){};
		~Shape(){};
		virtual float getArea() { return -1; } 
};

class Rectangle:public Shape{
	public:
		Rectangle(float h,float w):height(h),width(w){};
		~Rectangle(){};
		float getArea() {return height*width;}
		float getHeight() {return height;} 
		float getWidth() {return width;} 
	private:
		float height,width;
};

class Circle:public Shape{
	public:
		Circle(float r):radius(r){};
		~Circle(){};
		float getArea() {return 3.14*radius*radius;}
		float getRadius() {return radius;}  
	private:
		float radius;
};

class Square:public Rectangle{
	public:
		Square(float len):Rectangle(len,len){};
		~Square(){};
};

int main(){
	Shape *sp;
	sp = new Circle(5);
	cout << "The area of the Circle is " << sp->getArea() << endl;
	delete sp;
	sp = new Rectangle(4,6);
	cout << "The area of the Rectangle is " << sp->getArea() << endl;
	delete sp;
	sp = new Square(5);
	cout << "The area of the Square is " << sp->getArea() << endl;
	delete sp;
	return 0;
}
