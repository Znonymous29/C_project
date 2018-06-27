#include <iostream>
using namespace std;

class Rectangle {
	private:
		int top,right,bottom,left;
	public:
		Rectangle(int initTop=1,int initRight=1,int initBottom=0,int initLeft=0);
		int getArea();
}; 

Rectangle::Rectangle(int initTop,int initRight,int initBottom,int initLeft){
	top = initTop;
	right = initRight;
	bottom = initBottom;
	left = initLeft;
}

int Rectangle::getArea() {
	return (right-left)*(top-bottom);
}

int main(){
	Rectangle abc(12,10,2,4);
	cout << "矩形的面积为为" << abc.getArea() << endl;
}
